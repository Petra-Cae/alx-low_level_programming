#include <stdio.h>
/**
 * main - Prints first 98 Fibonacci numbers.
 * Return: Always 0
 */
int main(void)
{
	int counter;
	unsigned long a, b, c;
	unsigned long w, x, y, z;

	counter = 0;
	a = 0;
	b = 1;
	for (counter = 1; counter <= 91; counter++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	w = a % 1000;
	a = a / 1000;
	x = b % 1000;
	b = b / 1000;
	while (counter <= 98)
	{
		z = (w + x) / 1000;
		y = (w + x) - z * 1000;
		c = (a + b) + z;
		w = x;
		x = y;
		a = b;
		b = c;
		if (y >= 100)
			printf("%lu%lu", c, y);
		else
			printf("%lu0%lu", c, y);
		if (counter != 98)
			printf(", ");
		counter++;
	}
	putchar('\n');
	return (0);
}
