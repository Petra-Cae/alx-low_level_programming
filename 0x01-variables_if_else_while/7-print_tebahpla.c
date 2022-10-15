#include <stdio.h>

/**
 * main - print alphabet in reverse using putchar
 * Return: Always 0
 */
int main(void)
{
	char ab;

	for (ab = 'z'; ab >= 'a'; ab--)
		putchar(ab);
	putchar('\n');
	return (0);
}
