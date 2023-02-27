#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms in the
 * Fibonacci sequence up to 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 1, b = 2, c, sum = 0;
while (b <= 4000000)
{
if (b % 2 == 0)
sum += b;
c = a + b;
a = b;
b = c;
}
printf("%d\n", sum);
return (0);
}
