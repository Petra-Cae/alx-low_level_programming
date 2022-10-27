#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination of the copied string
* @src: the source string
* @n: number of bytes to be copied from src
*
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
