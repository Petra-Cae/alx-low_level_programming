#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array of elements
* @nmemb: elements
* @size: size of elememts
*
* Return: pointer to the allocated memory or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	while (a < (nmemb * size))
	{
		a++;
		arr[a] = 0;
	}
	return (arr);
}
