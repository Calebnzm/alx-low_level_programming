#include "main.h"

/**
* get_bit - gets the bit at a specific position
* @n: the number
* @index: the position
*
*Return: the value or -1 on failure
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
	return (-1);
}
return ((n >> index) & 1);
}

