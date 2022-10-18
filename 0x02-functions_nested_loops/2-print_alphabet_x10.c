#include "main.h"

/**
*print_alphabet_x10 - Prints the alphabets 10x
*
*/
void print_alphabet_x10(void)
{
	char ab;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (ab = 'a'; ab <= 'z'; ab++)
		{
			_putchar(ab);
		}
	_putchar('\n');
	}
}
