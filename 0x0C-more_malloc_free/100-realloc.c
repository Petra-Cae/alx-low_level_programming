#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previsouly allocated with a call to malloc
* @old_size: size of the allocated space for ptr
* @new_size: size of the new memory block
*
* Return: pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr = 0;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == old_size)
		return (arr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (arr == NULL)
		return (NULL);

	arr = malloc(new_size);
	return (arr);
}
