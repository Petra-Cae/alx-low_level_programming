#include <stdio.h>

/**
 * main -Prints all combos of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 9; o++)
			{
				if ((m < n && m != n) && (n < o && n != o))
				{
					putchar((m % 10) + '0');
					putchar((n % 10) + '0');
					putchar((o % 10) + '0');
					if (m == 7 && n == 8 && o == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
