 #include "main.h"

/**
*puts_half - Puts half of a string
*@str: the string
*
*Return: void
*/
void puts_half(char *str)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
}
