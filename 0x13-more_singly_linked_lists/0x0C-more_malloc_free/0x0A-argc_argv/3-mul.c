#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out the name of the program
* @argc: is the number of parameters passed
* @argv: is a vector of the parameters passed
*
* return: one if error else return succes
*/
int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
	printf("Error\n");
	return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
return (EXIT_SUCCESS);
}
