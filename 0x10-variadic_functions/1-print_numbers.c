#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n: number of ints passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int a = 0;

	va_start(mylist, n);

	while (a++ < n)
	{
		printf("%d", va_arg(mylist, int));
		if (separator != NULL && a < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
