#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{char c;
int d;
for (d = 0; d <= 9; d++)
{
putchar(d + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}

putchar('\n');

return (0);
}
