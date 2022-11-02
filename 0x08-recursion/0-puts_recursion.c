#include "main.h"

/**
* _puts_recursion - prints a string and then a new line
* @s: the string to be printed
*
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}
