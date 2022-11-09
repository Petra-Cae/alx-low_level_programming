#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: the width of the array
* @height: the height of the array
*
* Return: 0 or null
*/
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * (width + height + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * (width + 1));
		if (arr[a] == NULL)
		{
			while (a >= 0)
			{
				free(arr[a--]);
			}
			free(arr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}
	return (arr);
}
