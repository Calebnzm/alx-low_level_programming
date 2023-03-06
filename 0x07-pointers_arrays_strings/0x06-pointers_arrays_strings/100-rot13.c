#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
int i, j;
char *p = s;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i]; i++)
{
for (j = 0; rot13[j]; j++)
{
if (s[i] == rot13[j])
{
s[i] = ROT13[j];
break;
}
}
}
return p;
}
