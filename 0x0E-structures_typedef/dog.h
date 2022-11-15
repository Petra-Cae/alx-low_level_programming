#ifndef DOG_H
#define DOG_H

/**
* struct dog - represents a dog
* @name: the dog's name
* @age: the age of the dog
* @owner: the dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
