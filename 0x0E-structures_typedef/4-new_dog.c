#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the new dog
* @age: age of the dog
* @owner: new owner
*
* Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, k, l;
dog_t *newnode;
char *namecopy, *ownercopy;
i = j = k = l = 0;
for (i = 0; name[i]; i++)
;
namecopy = malloc(i *sizeof(char) + 1);
for (j = 0; name[j]; j++)
{
namecopy[j] = name[j];
}
namecopy[j] = '\0';
for (k = 0; owner[k]; k++)
;
ownercopy = malloc(k * sizeof(char) + 1);
if (ownercopy == NULL || namecopy == NULL)
{
	free(ownercopy);
	free(namecopy);
	return (NULL);
}
while (owner[l] != '\0')
{
ownercopy[l] = owner[l];
l++;
}
ownercopy[l] = '\0';
newnode = malloc(sizeof(dog_t));
if (newnode == NULL)
{
	free(newnode);
	return (NULL);
}
newnode->name = namecopy;
newnode->age = age;
newnode->owner = ownercopy;
return (newnode);
}
