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
int i, sign, res;

i = 0;
sign = 1;
res = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign = sign * -1;
if (s[i] >= '0' && s[i] <= '9')
res = res * 10 + (s[i] - '0');
if (s[i] == '+' && s[i + 1] >= '0' && s[i + 1] <= '9')
break;
i++;
}

return (sign * res);
}

