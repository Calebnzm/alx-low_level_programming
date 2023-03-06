#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory area (dest)
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return s;
}
s++;
}
if (*s == c)
{
return s;
}
return (NULL);
}

