#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints out the name of the program
* @argc: is the number of parameters passed
* @argv: is a vector of the parameters passed
*
* Return: one if error else return succes
*/
int main(int argc, char *argv[])
{
int result, i, j;
result = 0;
if (argc <= 1)
{
	printf("0\n");
	return (1);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
	printf("Error\n");
	return (1);
}
}
result = result + atoi(argv[i]);
}
printf("%d\n", result);
return (EXIT_SUCCESS);
}
