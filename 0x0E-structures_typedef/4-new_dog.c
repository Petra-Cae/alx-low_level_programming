#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new struct dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, i;
	dog_t *doggo;

	if (name == NULL || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	doggo->name = malloc(a * sizeof(char));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		doggo->name[i] = name[i];

	doggo->age = age;

	for (b = 0; owner[b]; b++)
		;
	doggo->owner = malloc(b * sizeof(char));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		doggo->owner[i] = owner[i];

	return (doggo);
}
