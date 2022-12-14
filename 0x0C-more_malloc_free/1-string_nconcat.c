#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: amount of s2 to add to s1
*
* Return: pointer to new string or null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a, b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (b > n)
		b = n;

	s3 = malloc(sizeof(char) * (a + b + 1));

	if (s3 == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s3[c] = s1[c];

	for (c = 0; c < b; c++)
		s3[c + a] = s2[c];

	s3[a + b] = '\0';
	return (s3);
}
