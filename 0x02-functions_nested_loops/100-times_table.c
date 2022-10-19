#include "main.h"

/**
 *print_times_table - Prints the times table from 0
 *@n: Interger
 *
 *Return: Always 0
 */
void print_times_table(int n)
{
	int a;
	int b;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				p = a * b;
				if (p <= 99)
				{
					_putchar(' ');
				}
				if (p <= 9)
				{
					_putchar(' ');
				}
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
