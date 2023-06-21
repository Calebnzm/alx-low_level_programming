#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
* main - prints reselt
* @ac: argument cout
* @av: argument vecto
*
* Return: 0 always
*/
int main(int ac, char *av[])
{
int ans;
int (*f)(int, int);
if (ac == 4 && av != NULL)
{
	f = get_op_func(av[2]);
	if (f != NULL)
	{
		ans = f(atoi(av[1]), atoi(av[3]));
		printf("%d\n", ans);
	}
	else
	{
		printf("Error\n");
	}
}
else
{
	printf("Error\n");
	exit(98);
}
return (0);
}
