#include <stdio.h>

/**
 * main - print 0 to 10 using printchar
 *
 * Return: Always 0
 */
int main(void)
{
	int t;

	t = 0;
	while (t < 10)
	{
		putchar(t + '0');
		t++;
	}
	putchar('\n');
	return (0);
}
