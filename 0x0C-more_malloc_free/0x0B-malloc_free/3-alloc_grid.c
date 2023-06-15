#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: rows
* @height: columns
*
* Return: NULL on failure,  pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **a;
if (width < 1 || height < 1)
{
	return (NULL);
}
a = malloc(height * sizeof(int *));
if (a == NULL)
{
	return (NULL);
}
for (j = 0; j < height; j++)
{
a[j] = malloc(width * sizeof(int));
if (a[j] == NULL)
{
	for (j = 0; j < i; j++)
	{
	free(a[j]);
	}
	free(a);
	return (NULL);
}
for (i = 0; i < width; i++)
{
a[j][i] = 0;
}
}
return (a);
}
