#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out the name of the program
* @argc: is the number of parameters passed
* @argv: is a vector of the parameters passed
*
* Return: exit succes status
*/
int main(int argc, char *argv[])
{
if (argc >= 1)
{
	printf("%s", argv[0]);
	printf("\n");
}
return (EXIT_SUCCESS);
}
