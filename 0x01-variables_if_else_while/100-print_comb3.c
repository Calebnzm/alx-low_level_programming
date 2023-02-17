
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{int d;
for (d = 0; d <= 9; d++)
{
for (int z=0; z<=9; z++)
{
if (z != d && d<z)
{
putchar(d + '0');
putchar(z + '0');
if (d != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
