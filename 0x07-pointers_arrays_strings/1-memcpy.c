#include "main.h"

/**
* _memcpy - copies memory area
* @dest: the destination of the memory area
* @src: the source of the memory area
* @n: number of bytes to be copied
*
*Return: *dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
