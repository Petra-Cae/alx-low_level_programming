#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to be searched
* @accept: bytes to be matched
*
* Return: pointer to byte in s that matches one in accept else NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
