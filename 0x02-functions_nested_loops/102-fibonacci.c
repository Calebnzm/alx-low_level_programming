#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers, separated by comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, i;
unsigned long long fib1 = 1, fib2 = 2, fib;

printf("1, 2, ");
for (i = 3; i <= 50; i++)
{
fib = fib1 + fib2;
printf("%llu", fib);
if (i < 50)
{
printf(", ");
}
fib1 = fib2;
fib2 = fib;
}
printf("\n");

return 0;
}
