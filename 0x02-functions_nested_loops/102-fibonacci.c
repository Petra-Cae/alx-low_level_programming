#include <stdio.h>

/**
 * main - Prints the First 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	unsigned long fbn1, fbn2, sum;

	fbn1 = 0;
	fbn2 = 1;
	for (a = 0; a < 50; a++)
	{
		sum = fbn1 + fbn2;
		fbn1 = fbn2;
		fbn2 = sum;
		printf("%lu", sum);
		if (a == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
