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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
			s++;
		}
	}
	return (s + 1);
}
