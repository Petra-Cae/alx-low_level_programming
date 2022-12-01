#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: binary num to be converted
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int binarynum, len;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binarynum = 1; len >= 0; len--, binarynum *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uint += binarynum;
		}
	}
	return (uint);
}
