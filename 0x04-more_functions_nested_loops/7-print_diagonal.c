#include "main.h"

/**
*print_diagonal - Draws a diagonal line
*@n: number of spaces
*/

void print_diagonal(int n)
{
	int a, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (c = 0; c < a; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
