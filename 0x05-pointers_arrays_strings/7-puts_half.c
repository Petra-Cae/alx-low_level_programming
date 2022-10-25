 #include "main.h"

/**
*puts_half - Puts half of a string
*@str: the string
*
*Return: void
*/
void puts_half(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	str -= (count / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
