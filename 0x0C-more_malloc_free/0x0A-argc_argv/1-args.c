#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out the name of the program
* @argc: is the number of parameters passed
* @argv: is a vector of the parameters passed
*
* Return: no return value always
*/
int main(int argc, char *argv[])
{
(void)argv;
if (argc >= 0)
{
	printf("%d", argc - 1);
	printf("\n");
}
return (EXIT_SUCCESS);
}

