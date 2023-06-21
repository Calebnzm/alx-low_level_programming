#include <stddef.h>
#include <stdlib.h>

/**
* array_iterator - executes a function given as a parameter on each element of an array
* @array: the array
* @size: the size of the array
* @action: the function to be executed
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL && size >= 0)
{
long unsigned int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

