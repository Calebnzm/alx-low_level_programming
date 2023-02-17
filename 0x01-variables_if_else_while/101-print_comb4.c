#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{int d, z, y;
for (d = 0; d <= 9; d++)
{
for (z = 0; z <= 9; z++)
{
for (y = 0; y <= 9; y++)
{
if (z != d && d < z && y != d && z != y && z < y)
{
putchar(d + '0');
putchar(z + '0');
putchar(y + '0');
if (d != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
