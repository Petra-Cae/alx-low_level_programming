#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @string: the string to be modified
*
*Return: the converted string
*/
char *cap_string(char *string)
{
	int a;
	int b;
	char c[] = " \t\n,;.!?\"(){}";

	while (*(string + a))
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			if (a == 0)
				(string[a] -= 'a' - 'A');
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (c[b] == *(string + a - 1))
						(string[a] -= 'a' - 'A');
				}
			}
		}
		a++;
	}
	return (string);
}
