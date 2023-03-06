#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer to the string to search.
 * @needle: pointer to the string to find.
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_pos;
char *needle_pos;

while (*haystack != '\0')
{
haystack_pos = haystack;
needle_pos = needle;

while (*haystack_pos == *needle_pos && *needle_pos != '\0' &&
*haystack_pos != '\0')
{
haystack_pos++;
needle_pos++;
}

if (*needle_pos == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
