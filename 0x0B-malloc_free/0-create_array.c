#include <stdlib.h>

/**
* create_array - creates an array of chars, with a specific char
* @size: is the size of the array
* @c: is the caher to initialize with
*
* Return: NULL if size = 0, a pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
{
	return (NULL);
}
a = malloc((size + 1) * sizeof(char));
if (a == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = c;
}
a[size] = '\0';
return (a);
}

