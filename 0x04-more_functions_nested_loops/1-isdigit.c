#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit
 * @c: Character to be analysed
 *
 *Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
