#include "main.h"

/**
* _memset - fills the first n bytes with a constant byte
* @s: pointer to the memory area to be filled
* @n: number of bytes to be filled
* @b: the constant byte
*
* Return: *s
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
