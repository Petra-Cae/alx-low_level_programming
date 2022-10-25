#include "main.h"

/**
*rev_string - reverses a string
*@s: a string
*
*Return:void
*/

void rev_string(char *s)
{
	int l = 0;
	int c = 0;
	char string[1000];

	while (*(s + l))
	{
		*(s + l) = *(s + l);
		l++;
	}
	l = l - 1;
	while (l >= 0)
	{
		*(s + l) = *(s + c);
		c++;
		l--;
	}
}
