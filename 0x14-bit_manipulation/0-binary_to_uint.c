#include "main.h"

/**
* binary_to_uint - converts binary to base 10
* @b: pointer to the binary
*
* Return: the number to base 10 or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
int i, power;
unsigned int uint;
power = uint = 0;
if (b == NULL)
{
	return (0);
}
for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
{
	return (0);
}
if (b[i] == '1')
{
	uint = uint + (1 << power);
}
power++;
}
return (uint);
}
