#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string
* @accept: bytes to be accepted come from here
*
*Return: bytes in s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}
