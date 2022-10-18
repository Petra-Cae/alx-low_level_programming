#include "main.h"

/**
 * print_last_digit - Prints last digit of int
 * @n: Interger
 *
 *Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int number;

	number = n % 10;

	if (number < 0)
	{
		_putchar(-number + '0');
		return (-number);
	}
	else
	{
		_putchar(number + '0');
		return (number);
	}

}
