#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: bytes to match
 *
 * Return: number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, match;

match = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
match++;
break;
}
}
if (!accept[j])
return (match);
}
return (match);
}
