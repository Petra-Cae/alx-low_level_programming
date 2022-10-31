#include "main.h"

/**
* _strstr - locates the first occurence of a substring
* @haystack: string that is searched
* @needle: string to be searched for
*
*Return:Returns a pointer to first occurence of needle else NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] > '\0'; a++)
	{
		for (b = a; haystack[b] > '\0' && needle[b - a] > '\0'; b++)
		{
			if (haystack[b] != needle[b - a])
			{
				break;
			}
		}
		if (needle[b - a] == '\0')
		{
			return (haystack + a);
		}
	}
	return ('\0');
}
