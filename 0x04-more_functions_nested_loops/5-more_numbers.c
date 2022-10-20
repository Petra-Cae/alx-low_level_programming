#include "main.h"

/**
*more_numbers - Prints 10x the numbers 0 to 14
*/

void more_numbers(void)
{
	int c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
