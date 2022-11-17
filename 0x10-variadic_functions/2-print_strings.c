#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - just as the name says
* @separator: string printed between the strings
* @n: number of strings passed to func
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	char *mystring;
	unsigned int a = 0;

	va_start(strlist, n);

	while (a++ < n)
	{
		mystring = va_arg(strlist, char *);

		if (mystring == 0)
			printf("(nil)");
		else
			printf("%s", mystring);

		if (separator != NULL && a < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strlist);
}
