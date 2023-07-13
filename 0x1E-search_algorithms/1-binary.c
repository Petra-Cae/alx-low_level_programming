#include "search_algos.h"
/**
* recursive_search - searches for a value in an array of
* integers using the Binary search algorithm
* @array: points to the first el of the arr to search in
* @size: size of the array
* @value: value to search for
*
* Return: index of the number
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t split = size / 2;
	size_t a;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");

	for (a = 0; a < size; a++)
		printf("%s %d", (a == 0) ? ":" : ",", array[a]);
	printf("\n");

	if (split && size % 2 == 0)
		split--;

	if (value == array[split])
		return ((int)split);

	if (value < array[split])
		return (recursive_search(array, split, value));
	split++;

	return (recursive_search(array + split, size - split, value) + split);
}


/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary Search Algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to be searched for
*
* Return: index where value is stored
*/
int binary_search(int *array, size_t size, int value)
{
	int b;

	b = recursive_search(array, size, value);

	if (b >= 0 && array[b] != value)
		return (-1);

	return (b);
}
