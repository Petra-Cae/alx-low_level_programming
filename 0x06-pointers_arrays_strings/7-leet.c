#include "main.h"

/**
 *leet - encodes a string in 1337
 *@string: the string
 *
 *Return: the modified string;
 */
char *leet(char *string)
{
	int a;
	int b;

	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (string[a] == c[b])
			{
				string[a] = d[b];
			}
		}
	}

	return (string);
}
