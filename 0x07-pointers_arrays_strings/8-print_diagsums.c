#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
*
* @a: 2d array of int types
* @size: size of array (square)
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int m;
	int sum1 = 0;
	int sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 += a[m];
		sum2 += a[size - m - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
