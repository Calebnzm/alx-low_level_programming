#ifndef _DOG_H
#define _DOG_H

/**
* struct dog - to store the details of a dog
* @name: type = char *
* @age: type = float
* @owner: type = char *
*
* Desription: to store the details of a dog with the above elements
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

