#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: a string
 *Return: no return
 */

void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	for (len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
