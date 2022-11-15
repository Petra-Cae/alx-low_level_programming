#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: pointer to dog or null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, d;
	dog_t *doggo;

	for (a = 0; name[a]; a++)
		;

	for (b = 0; owner[b]; b++)
		;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(a * sizeof(doggo->name));
	if (doggo->name == NULL)
		return (NULL);
	for (d = 0; d < a; d++)
		doggo->name[d] = name[d];

	doggo->age = age;

	doggo->owner = malloc(b * sizeof(doggo->owner));
	if (doggo->owner == NULL)
		return (NULL);
	for (d = 0; d < b; d++)
		doggo->owner[d] = owner[d];

	return (doggo);
}
