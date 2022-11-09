#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees the 2D grid in alloc_grid
* @grid: array of integers
* @height: height of the grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int z;

	if (grid != NULL)
	{
		for (z = 0; z < height; z++)
		{
			free(grid[z]);
		}
		free(grid);
	}
}
