#include "main.h"

/**
 * print_sign - Print the number sign
 * @n: Interger
 *
 *Return: 0 if n is 0, 1 if positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
