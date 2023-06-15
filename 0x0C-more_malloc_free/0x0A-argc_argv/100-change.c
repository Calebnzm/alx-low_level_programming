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
int cents;
int coins = 0;
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
	printf("0\n");
}
while (cents > 0)
{
if (cents - 25 >= 0)
{
	cents = cents - 25;
	coins = coins + 1;
} else if (cents - 10 >= 0)
{
	cents = cents - 10;
	coins = coins + 1;
} else if (cents - 5 >= 0)
{
	cents = cents - 5;
	coins = coins + 1;
} else if (cents - 2 >= 0)
{
	cents = cents - 2;
	coins = coins + 1;
}
else if (cents - 1 >= 0)
{
	cents = cents - 1;
	coins = coins + 1;
}
}
printf("%d\n", coins);
return (EXIT_SUCCESS);
}
