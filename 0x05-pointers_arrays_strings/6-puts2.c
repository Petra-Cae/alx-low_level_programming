# include "main.h"

/**
* puts2 - puts every other char of a string
* @str:  the string
*
* Return: void
*/

void puts2(char *str)
{
	int n = 0;

	n = n + 2;
	while (*(str + n))
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
