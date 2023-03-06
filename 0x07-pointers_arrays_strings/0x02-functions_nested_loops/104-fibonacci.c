#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by comma and a space,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, a = 1, b = 2, c;
printf("%d, %d, ", a, b);
for (i = 3; i <= 98; i++)
{
c = a + b;
printf("%d", c);
if (i != 98)
printf(", ");
a = b;
b = c;
}
printf("\n");
return (0);
}
