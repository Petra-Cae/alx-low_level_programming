#include "main.h"

/**
* rot13 - encodes a string using rot13
* @string: the string
*
* Return: the modified string
*/

char *rot13(char *string)
{
	int a = 0;
	int b;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (string[a] != '\0')
	{
		for (b = 0; b <= 51; b++)
		{
			if (string[a] == alphabets[b])
			{
				string[a] = rot13[b];
				break;
			}
		}
		a++;
	}

	return (string);
}
