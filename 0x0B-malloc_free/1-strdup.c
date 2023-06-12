#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string which is a duplicate of a string
* @str: a pointer to the string to be duplicated
*
* Return: NULL if str = NULL, a pointer to the duplicated string
*/
char *_strdup(char *str)
{
int i;
char *a;
int j;
i = 0;
while (str[i] != '\0')
{
i++;
}
if (str == NULL)
{
	return (NULL);
}
a = malloc(i *sizeof(char) + 1);
if (a == NULL)
{
	return (NULL);
}
for (j = 0; j <= i; j++)
{
a[j] = str[j];
}
a[j] = '\0';
return (a);
}
