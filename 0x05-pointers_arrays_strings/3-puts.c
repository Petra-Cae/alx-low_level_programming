#include "main.h"

/**
*_puts - prints a string to stdout
*@str: a string
*
*Return: void
*/
void _puts(char *str)
{
	int s = 0;

	while (*(str + s))
	{
		_putchar(*(str + s));
		s++;
	}
	_putchar('\n');
}
