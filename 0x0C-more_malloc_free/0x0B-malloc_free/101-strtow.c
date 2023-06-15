#include <stdlib.h>

/**
* strtow - splits a string into words
* @str: a pointer to the string
*
* Return: a pointer to an array of strings (words)
1*/

char **strtow(char *str)
{
char **a;
int j, k, z, m, l, word;
word = k = z = 0;
if (str == NULL || str[0] == '\0')
{
	return (NULL);
}
while (str[j] != '\0')
{
if (str[j] == ' ')
{
	j++;
}
else
{
	while (str[j] != ' '  && str[j] != '\0')
	{
	j++;
	}
	word++;
}
}
a = malloc((word + 1) * sizeof(char *));
if (a == NULL)
{
	return (NULL);
}
if (word == 0)
{
	a[0] = NULL;
}
j = 0;
while (str[j] != '\0' && k < word)
{
if (str[j] == ' ')
{
	j++;
}
else
{
	m = j;
	while (str[j] != ' ' && str[j] != '\0')
	{
	z++;
	j++;
	}
	a[k] = malloc((z + 1) * sizeof(char));
	for (l = 0; l < z; l++)
	{
	a[k][l] = str[m];
	m++;
	}
	a[k][l] = '\0';
	k++;
	z = 0;
}
}
a[word] = NULL;
return (a);
}
