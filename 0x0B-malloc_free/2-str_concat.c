#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
*
*Return: new pointer or null
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a;
	int b;
	int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	s3 = malloc(sizeof(a + b - 1) * 2);

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}
	for (a = 0; s1[a]; a++)
		s3[c] = s1[a];
	for (b = 0; s2[b]; b++)
		s3[c] = s1[a];

	return (s3);
}
