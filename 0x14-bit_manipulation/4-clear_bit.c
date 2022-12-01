#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number to be used
* @index: index of the bit
*
* Return: 1 if successful else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int d;

	if (index > 63)
		return (-1);

	d = 1 << index;

	if (*n & d)
		*n ^= d;

	return (1);
}
