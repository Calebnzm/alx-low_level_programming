#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_strings -  prints its parameters
* @separator: separator character
* @n: number of numbers
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *a;
unsigned int i;
va_list args;
if (separator != NULL)
{
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	a = va_arg(args, char *);
	if (a == NULL)
	{
		printf("(nil)");
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	else
	{
		printf("%s", a);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	}
}
va_end(args);
printf("\n");
}
