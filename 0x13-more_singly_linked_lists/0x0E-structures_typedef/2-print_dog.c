#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog -  prints a struct dog
* @d: pointer to the struct
*
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
}
