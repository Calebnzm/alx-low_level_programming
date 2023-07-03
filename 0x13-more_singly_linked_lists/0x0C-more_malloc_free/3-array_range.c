#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: smallest number
* @max: largest and last number
*
* Return: pointer to the array
*/
int *array_range(int min, int max)
{
int *a, range, i, j;
if (min > max)
{
	return (NULL);
}
range = max - (min - 1);
a = malloc(range *sizeof(int));
if (a == NULL)
{
	return (NULL);
}
j = (min);
i = 0;
while (i < range && j <= max)
{
a[i] =  j;
i++;
j++;
}
return (a);
}
