#include <stdio.h>

/**
 * main - Print alphabets minus a few
 *
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		if ((a != 'e' && a != 'q') && a <= 'z')
		{
			putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
