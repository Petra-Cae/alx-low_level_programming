#include "function_pointers.h"

/**
* array_iterator - execs func given as parameter on each array's element
* @array: the array
* @size: size of the array
* @action: points to the function
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (!array || !action)
		return;

	while (a < size)
		action(array[a++]);
}
