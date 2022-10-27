#include "main.h"

/**
* _strncat - concatenates two strings using at most n bytes from src
* @dest: The destination string
* @src: the source string
* @n: an int representing the bytes to be appended on dest from src
*
* Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n)
	{
		dest[a] = src[b];
		if (src[b] == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
