#include "main.h"

/**
 *times_table - 9 Times table
 *
 *Return: void
 */

void times_table(void)
{
	int a;
	int t;
	int e;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (t = 1; t < 10; t++)
		{
			_putchar(',');
			_putchar(' ');

			e = a * t;

			if (e < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((e / 10) + '0');
			}
			_putchar((e % 10) + '0');
		}
		_putchar('\n');
	}
}
