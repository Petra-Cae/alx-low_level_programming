#include <stdio.h>

/**
 *main - Prints the sum of multiples of 3 or 5 below 1024
 *
 *Return: Always 0
 */
int main(void)
{
	int n, p;

	for (n = 0; n < 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
		{
			p += n;
		}
	printf("%d\n", p);
	return (0);
}
