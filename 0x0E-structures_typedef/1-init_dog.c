#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialises a var of type struct dog
* @d: points to dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
