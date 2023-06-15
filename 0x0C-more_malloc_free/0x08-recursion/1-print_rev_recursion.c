#include "main.h"

/**
 * _print_rev_recursion - prints out a string in reverse recursively
 * @s: pointer to a character in the string
 *
 * Return: void return
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
