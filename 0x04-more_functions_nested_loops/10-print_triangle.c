#include "main.h"

/**
 * print_triangle - Prints a triangle of size n using the # character.
 *
 * @size: The size of the triangle to print.
 */
void print_triangle(int size)
{
int row, column;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (column = 1; column <= size - row; column++)
{
_putchar(' ');
}
for (column = 1; column <= row; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
