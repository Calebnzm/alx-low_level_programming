#include "main.h"

/**
* is_palindrome - determines whether a string is a palindrome or not
* @s: pointer to the first character in the string
*
* Return:  1 if s is a palindrome and 0 if  not
*/
int is_palindrome(char *s)
{
int z = len(s);
return (is_palindrome_helper(s, 0, z - 1));
}

/**
* is_palindrome_helper - helps is_palindrome determine
* @s: pointer to the first character in the string
* @start: variable to compare a certain index with another
* @end: variable to compare a certain index with another
*
* Return:  1 if s is a palindrome and 0 if  not
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
	return (1);
}
else if (s[start] != s[end])
{
	return (0);
}
else
{
	return (is_palindrome_helper(s, start + 1, end - 1));
}
}

/**
* len - determines length of a string
* @s: pointer to the first character in the string
*
* Return:  length of a string
*/
int len(char *s)
{
if (*s == '\0')
{
	return (0);
}
	return (1 + len(s + 1));
}
