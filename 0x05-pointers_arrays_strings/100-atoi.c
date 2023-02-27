#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted to integer
 *
 * Return: integer representation of string
 */
int _atoi(char *s)
{
int sign = 1, num = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
s++;
}

return sign * num;
}
