#include "main.h"

/**
 *print_numbers - Prints 0 -9
 *
 *Return: 0 to 9
 */
void print_numbers(void)
{
	char a;

	while (a >= 0 && a <= 9)
	{
		_putchar(a + '0', a++);
	}
	_putchar('\n');
}
