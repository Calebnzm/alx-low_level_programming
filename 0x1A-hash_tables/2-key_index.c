#include "hash_tables.h"

/**
* key_index - Creates the index for a key
* @key: the key to create index for
* @size: the size of the hashtable
*
* Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
