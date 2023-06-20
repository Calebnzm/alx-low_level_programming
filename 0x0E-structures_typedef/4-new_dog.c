#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *ownercopy;
dog_t *new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
	return (NULL);
new_dog_ptr->name = strdup(name);
if (new_dog_ptr->name == NULL)
{
	free(new_dog_ptr);
	return (NULL);
}
new_dog_ptr->age = age;
ownercopy = strdup(owner);
if (ownercopy == NULL)
{
	free(new_dog_ptr->name);
	free(new_dog_ptr);
	return (NULL);
}
new_dog_ptr->owner = ownercopy;
return (new_dog_ptr);
}

