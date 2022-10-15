#include <stdio.h>

/**
 * main - Print numbers of base 16 in lower case
 *
 * Return: Always o
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
