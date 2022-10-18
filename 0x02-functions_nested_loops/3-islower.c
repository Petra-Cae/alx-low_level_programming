#include "main.h"

/**
 *_islower - Checks for lowercase letters showing 1 if lowercase else 0
 *@c: The character argument
 *
 *Return: 1 for lowercase and o for others
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
