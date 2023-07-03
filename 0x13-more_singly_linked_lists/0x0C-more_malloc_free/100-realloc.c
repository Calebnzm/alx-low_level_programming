#include <stdlib.h>

/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: pointer to old block
* @old_size: size of old block
* @new_size: size of new block
*
* Return: pointer to new block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
unsigned int i;
i = 0;
if (new_size == old_size)
{
	return (ptr);
}
if (ptr == NULL)
{
	return (malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
a = malloc(new_size);
if (a == NULL)
{
	free(ptr);
	return (NULL);
}
while (i < old_size)
{
a[i] = *((char *)ptr + i);
i++;
}
free(ptr);
return (a);
}
