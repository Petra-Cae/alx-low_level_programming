#include "main.h"

/**
*print_square - Prints a square shape
*@size: size of the square
*/

void print_square(int size)
{
	int a, c;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (c = 0 ; c < size ; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
