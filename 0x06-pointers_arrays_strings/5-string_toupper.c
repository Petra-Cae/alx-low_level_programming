#include "main.h"

/**
* string_toupper - changes lowercase letters of a string to upper case
* @string: string to be converted
*
*Return: converted string
*/
char *string_toupper(char *string)
{
	int a = 0;

	while (string[a] != '\0')
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			string[a] -= 'a' - 'A';
		}
		a++;
	}
	return (string);
}
