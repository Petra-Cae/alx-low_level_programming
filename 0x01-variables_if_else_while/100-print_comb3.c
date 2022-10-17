#include <stdio.h>

/**
 * main - Different combos of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n < m && n != m)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				if (n == 8 && m == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
