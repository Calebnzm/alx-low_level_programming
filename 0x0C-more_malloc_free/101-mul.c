#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two number
* @ac: number of arguments
* @av: vector of the atguments
*
* Return: 0
*/
int main(int ac, char *av[])
{
int divisor, n, i, j;
i = 1;
if (ac != 3)
{
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
	exit(98);
}
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
if (av[i][j] < '0' || av[i][j] > '9')
{
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
	exit(98);
}
j++;
}
i++;
}
i = 1;
n = atoi(av[1]) * atoi(av[2]);
if (n < 0)
{
	_putchar('-');
	n = -n;
}
divisor = 1;
while (n / divisor > 9)
divisor *= 10;
while (divisor > 0)
{
_putchar(n / divisor + '0');
n %= divisor;
divisor /= 10;
}
_putchar('\n');
return (0);
}
