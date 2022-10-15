#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to var every time it is executed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (n > 5 && n != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Invalid operation\n");
	}
	return (0);
}

