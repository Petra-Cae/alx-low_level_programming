#include "main.h"

/**
*print_line - Draws a straight line in the terminal
*@n: number of times _ should be printed
*/
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
