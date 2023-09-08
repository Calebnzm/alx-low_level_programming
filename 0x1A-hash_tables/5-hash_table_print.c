#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table to print
*
* Return: nothing(always)
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index;
	int flag;

	if (ht != NULL)
	{
		printf("{");
		index = flag = 0;
		while (index < ht->size)
		{
			current = ht->array[index];
			while (current)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				flag = 1;
				current = current->next;
			}
			index++;
		}
		printf("}\n");
	}
}
