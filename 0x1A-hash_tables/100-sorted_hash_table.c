#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created sorted hash table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * create_node - Creates a new sorted hash node
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: A pointer to the newly created sorted hash node or NULL on failure
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	return (node);
}

/**
 * shash_table_set - Adds or updates a key-value pair in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: 1 if successful, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *prev, *new_node;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		prev = current;
		current = current->next;
	}
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	if (prev)
		prev->next = new_node;
	else
		ht->array[index] = new_node;
	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		shash_node_t *tmp = ht->shead;
		while (tmp && strcmp(tmp->key, key) < 0)
		{
			ht->stail = tmp;
			tmp = tmp->snext;
		}
		if (!tmp)
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail;
			ht->stail = new_node;
		}
		else
		{
			new_node->snext = tmp;
			if (tmp->sprev)
				tmp->sprev->snext = new_node;
			else
				ht->shead = new_node;
			new_node->sprev = tmp->sprev;
			tmp->sprev = new_node;
		}
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to look up
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
* shash_table_print - Prints a sorted hash table
* @ht: The sorted hash table to print
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	current = ht->shead;

	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			printf(", ");
		current = current->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	printf("{");
	current = ht->stail;

	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			printf(", ");
		current = current->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
