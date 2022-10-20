#include "main.h"

/**
*print_triangle - Prints a trianglular shape
*@size: the size of the triangle
*/
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; b > a; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c < a + 1; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
