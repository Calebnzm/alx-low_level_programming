#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: size of second string to be concatenaated
*
* Return: pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int lens1, lens2, i, lens3, j;
lens1 = j = lens2 = i = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
{
lens1++;
i++;
}
i = 0;
while (s2[i] != '\0')
{
lens2++;
i++;
}
if (n >= lens2)
	n = lens2;
lens3 = lens1 + n + 1;
a = malloc(lens3);
if (a == NULL)
	return (NULL);
i = 0;
while (i < lens1)
{
a[i] = s1[i];
i++;
}
while (i < lens3)
{
a[i] = s2[j];
i++;
j++;
}
a[lens3] = '\0';
return (a);
}

