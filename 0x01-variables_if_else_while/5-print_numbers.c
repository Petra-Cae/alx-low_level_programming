#include <stdio.h>

/**
 * main - Print single digit numbers of base ten
 *
 * Return: 0
 */
int main(void)
{
	int t;

	t = 0;
	for (t < 10; t++)
		printf("%d", t);
	printf('\n');
	return (0);
}
