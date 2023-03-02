#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_map[] = "aAeEoOtTlL44330771"; /* map of characters to replace */

i = 0;
while (str[i] != '\0')
{
j = 0;
while (leet_map[j] != '\0')
}
if (str[i] == leet_map[j])
{
str[i] = leet_map[j + 10];
break;
}
j++;
}
i++;
}

return (str);
}
