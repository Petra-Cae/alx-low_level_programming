#include "main.h"

/**
* _strchr - locates a char in a string
* @s: the string
* @c: the character
*
*Return: pointer to first occurence of char c in s else 0
*/
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
