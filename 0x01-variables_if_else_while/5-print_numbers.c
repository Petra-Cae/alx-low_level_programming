#include <stdio.h>

/**
 * main - Print single digit numbers of base ten
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf(n);
		n++;
	}
	printf('\n');
	return (0);
}
