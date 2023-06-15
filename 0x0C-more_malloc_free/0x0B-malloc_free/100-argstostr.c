#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: argument vector
*
* Return: a pointer to the new string
*/
char *argstostr(int ac, char **av)
{
int i, total, k, j;
char *a;
i = 0;
total = 0;
k = 0;
j = 0;
if (ac == 0 || av == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
while (av[i][j] != '\0')
{
total = total + 1;
j++;
}
j = 0;
}
total = total + ac;
a = malloc(total *sizeof(char));
if (a == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
while (av[i][j] != '\0')
{
a[k] = av[i][j];
k++;
j++;
}
j = 0;
a[k] = '\n';
k++;
}
return (a);
}
