#include <stdio.h>

/**
 * main - Print combo of two two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m <= 98; m++)
	{
		for (n = 0; n <= 99; n++)
		{
			if (m < n && m != n)
			{
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				putchar (' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (m == 98 && n == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
