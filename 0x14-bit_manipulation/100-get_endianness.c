#include "main.h"

/**
* get_endianness - checks for endianness
*
* Return: if endiannes
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c)
	return (1);
else
	return (0);
}
