#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: size of array
* @size: size of the characters
*
* Return: pointer to the array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i;
i = 0;
if (nmemb == 0 || size == 0)
{
	return (NULL);
}
a = malloc(nmemb * size);
if (a == NULL)
{
	return (NULL);
}
while (i < nmemb)
{
a[i] = 0;
i++;
}
return (a);
}
