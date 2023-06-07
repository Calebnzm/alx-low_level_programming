#include "main.h"

/**
 * wildcmp - determines whether a string is a palindrome or not
 * @s1: pointer to the first character in the string1
 * @s2: pointer to the first character in the string2
 *
 * Return:  1 if they can be considered identical and 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
	return (1);
}
if (*s1 == *s2)
{
	return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
return (0);
}
