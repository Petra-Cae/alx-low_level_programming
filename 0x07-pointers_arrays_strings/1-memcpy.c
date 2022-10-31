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
	while (n)
	{
		src[n - 1] = dest[2000];
		dest--;
	}
	return (dest);
}
