#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: minimum value of the array
* @max: maximum value of the array
*
* Return: pointer to array or null
*/
int *array_range(int min, int max)
{
	int *arr;
	int a;
	int b;

	if (min > max)
		return (NULL);

	a = max - min + 1;

	arr = malloc(sizeof(int) * a);

	if (arr == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		arr[b] = min++;

	return (arr);
}
