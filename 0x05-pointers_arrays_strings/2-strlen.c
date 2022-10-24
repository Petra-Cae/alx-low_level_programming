#include "main.h"

/**
*_strlen - Returns the length of a string
*@s: the string
*
*Return: 0
*/
int _strlen(char *s)
{
	int stl = 0;

	while (*(s + stl) != '\0')
	{
		stl++;
	}
	return (stl);
}
