#include <stdio.h>

/**
 * main - Print alphabets in lowercase
 *
 * Return: Always 0 (Good job)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar("%c ", a);
		a++;
	}
	putchar('\n');
	return (0);
}
