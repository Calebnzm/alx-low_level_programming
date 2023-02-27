#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a newline character
 *
 * @str: The string to print characters from
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
putchar(str[i]);
}

i++;
}

putchar('\n');
}

