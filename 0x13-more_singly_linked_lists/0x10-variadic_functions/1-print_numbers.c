#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_numbers -  prints of all its parameters
* @separator: separator character
* @n: number of numbers
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int x;
unsigned int i;
va_list args;
if (separator != NULL)
{
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	printf("%d", x);
	if (i != n - 1)
	{
		printf("%s", separator);
	}
	}
}
va_end(args);
printf("\n");
}
