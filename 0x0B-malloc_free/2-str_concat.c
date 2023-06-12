#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: NULL on failure, ponter to new string
*/
char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *a;
if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
i = 0;
while (s1[i] != '\0')
{
i++;
}
j = 0;
while (s2[j] != '\0')
{
j++;
}
k = i + j + 2;
a = malloc(k * sizeof(char));
if (a == NULL)
{
	return (NULL);
}
for (l = 0; l < i; l++)
{
a[l] = s1[l];
}
for (l = 0; l < j; l++)
{
a[l + i] = s2[l];
}
a[l + i] = '\0';
return (a);
}

