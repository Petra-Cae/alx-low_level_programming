#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: integer
*
*Return: pointer to allocated memory or 98
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(b));

	if (s == NULL)
		exit(98);

	return (s);
}
