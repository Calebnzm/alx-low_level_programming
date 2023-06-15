#include <stdio.h>
#include <stdlib.h>

/**
* main - prints out the name of the program
* @argc: is the number of parameters passed
* @*argv[]: is a vector of the parameters passed
*
* return: no return value always
*/
int main(int argc, char *argv[])
{
int i;
if (argc >= 0)
{
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
}
return (EXIT_SUCCESS);
}
