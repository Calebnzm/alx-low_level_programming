#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143;
long int factor, largest;

factor = 2;
largest = 2;

while (n != 1)
{
if (n % factor == 0)
{
largest = factor;
n = n / factor;
}
else
{
factor++;
}
}

printf("%ld\n", largest);

return (0);
}
