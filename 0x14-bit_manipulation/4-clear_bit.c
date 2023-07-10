#include "main.h"

/**
* clear_bit - sets a bit to a bit position
* @n: the binary sequence
* @index: the position
*
* Return: 1 on success and -1 o failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int old_n;
old_n = *n;
if (n == NULL)
{
	return (-1);
}
if (index >= sizeof(*n) * 8)
{
	return (-1);
}
*n = *n & ~(1UL << index);
if (*n == old_n)
{
	return (-1);
}
return (1);
}
