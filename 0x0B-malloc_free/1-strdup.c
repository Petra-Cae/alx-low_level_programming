#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a new string that is a duplicate of str
* @str: the string to be duplicated
*
*Return: pointer to _strdup
*/
char *_strdup(char *str)
{
	char *dupstr;
	unsigned int s;
	unsigned int a;

	if (str == NULL)
		return (NULL);

	while (s >= 1 && str[s] != '\0')
		s++;

	dupstr = malloc(sizeof(char) * (s + 1));

	if (dupstr == NULL)
		return (NULL);

	for (a = 0; a < s; a++)
		dupstr[a] = str[a];

	return (dupstr);
}
