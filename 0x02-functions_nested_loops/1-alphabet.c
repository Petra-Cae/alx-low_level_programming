#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets
 */
void print_alphabet(void)
{
	char ab;

	ab = 'a';
	while (ab <= 'z')
	{
		putchar(ab);
		ab++;
	}
	putchar('\n');
}
