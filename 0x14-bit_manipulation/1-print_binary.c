#include "main.h"

/**
* print_binary - prints a number in binry
* @n: the number
*
* Return: Nothing
*/
void print_binary(unsigned long int n)
{
int i, j;
unsigned long int number;
char bits[64];
i = 0;
number = n;
if (number == 0)
{
	printf("0");
}
while (number > 0)
{
if (number % 2)
{
	bits[i] = '1';
}
else
{
	bits[i] = '0';
}
number = number / 2;
i++;
}
for (j = i - 1; j >= 0; j--)
{
printf("%c", bits[j]);
}
}
