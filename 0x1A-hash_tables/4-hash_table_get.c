#include "hash_tables.h"

/**
* hash_table_get - gets value at certain index in ahash table
* @ht: hash table to retreive from
* @key: the key to get its value
*
* Return: value of key(success) null(failure)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
