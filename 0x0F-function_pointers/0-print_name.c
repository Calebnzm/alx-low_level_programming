#include <stdlib.h>

/**
* print_name - prints name
* @name: the name
* @f: pointer to the appropriate function
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
{
	if (*name == '\0')
	{
		name = "";
	}
	f(name);
}
}
