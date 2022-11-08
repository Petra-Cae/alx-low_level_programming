#include <stdlib.h>
#include "main.h"

/**
* create_array - Creates an array of chars
* @size: the size of the array
* @c: the chars
*
*Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(c) * size);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
