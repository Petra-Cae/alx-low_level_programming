#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of intergers
*@a: array
*@n: elements
*
*Return: void
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
		{
			printf("%d", a[b]);
		}
		else
		{
			printf(", %d", a[b]);
		}

	}
	printf("\n");

}
