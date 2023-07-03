#include <stdarg.h>

/**
* sum_them_all -  sums of all its parameters
* @n: no of parameters
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
int sum, x;
unsigned int i;
va_list args;
sum = 0;
if (n == 0)
{
	return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
sum = sum + x;
}
va_end(args);
return (sum);
}
