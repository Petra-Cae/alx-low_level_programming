#include "main.h"

/**
* get_endianness - Checks the endianness
*
* Return: 0 if big endian, -1 if little endian
*/
int get_endianness(void)
{
	int b = 1;
	char *endianchk = (char *)&b;

	if (*endianchk == 1)
		return (1);

	return (0);
}
