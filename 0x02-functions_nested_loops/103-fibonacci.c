#include <stdio.h>

/**
 * main - Prints sum of even-valued Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long a, b, d, sum;

	a = 1;
	b = 2;
	d = sum = 0;
	while (d <= 4000000)
	{
		d = a + b;
		a = b;
		b = d;
		if ((a % 2) == 0)
		{
			sum += a;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
