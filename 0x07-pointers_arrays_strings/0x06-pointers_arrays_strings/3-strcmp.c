#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
break;
}

return (s1[i] - s2[i]);
}
