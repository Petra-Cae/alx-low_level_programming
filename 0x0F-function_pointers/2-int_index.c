#include "function_pointers.h"
/**
* int_index - searches for an int
* @array: array to be searched
* @size: number of elements in the array
* @cmp: pointer to function used for comparision
*
*Return: -1 if no match or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
