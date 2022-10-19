#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints up to 98 natural numbers
 *
 *@n: interger
 *Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
