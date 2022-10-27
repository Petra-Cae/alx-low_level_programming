#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
*
* Return: 0 if equal else return the difference between unmatched characters
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && a != '\0')
	{
		a++;
	}
	if (s1[a] == s2[a])
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
