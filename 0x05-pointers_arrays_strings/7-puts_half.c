#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a newline character
 *
 * @str: The string to print the second half of
 */
void puts_half(char *str)
{
int i, j;
int length = 0;


while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
i = length / 2;
}
else
{
i = (length - 1) / 2;
}

for (j = i; j < length; j++)
{
putchar(str[j]);
}

putchar('\n');
}

