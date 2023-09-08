#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: The hash table to delete.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int index;

	if (ht != NULL)
	{
		index = 0;
		while (index < ht->size)
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
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
