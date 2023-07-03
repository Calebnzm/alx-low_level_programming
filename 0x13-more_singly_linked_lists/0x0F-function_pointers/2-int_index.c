#include <stdlib.h>

/**
* int_index -  searches for an integer
* @array: array to be checked
* @size: size of the array
* @cmp: pointer to the relevant function
*
* Return: the index of the matching number and -1 otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
	return (-1);
}
if (array != NULL && size > 0 && cmp != NULL)
{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
		return (i);
	}
	}
}
return (-1);
}
