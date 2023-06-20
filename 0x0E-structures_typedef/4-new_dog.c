#include <stdio.h>
#include <string.h>
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
dog_t *newnode;
char *namecopy, *ownercopy;
namecopy = strdup(name);
if (namecopy == NULL)
{
	return (NULL);
}
ownercopy = strdup(owner);
if (ownercopy == NULL)
{
	free(namecopy);
	return (NULL);
}
newnode = malloc(sizeof(dog_t));
if (newnode == NULL)
{
	free(namecopy);
	free(ownercopy);
	return (NULL);
}
newnode->name = namecopy;
newnode->age = age;
newnode->owner = ownercopy;
return (newnode);
}
