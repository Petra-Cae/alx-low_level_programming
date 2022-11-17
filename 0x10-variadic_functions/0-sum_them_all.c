#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
*
*Return: sum or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	unsigned int a = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(numlist, n);

	while (a++ < n)
		sum += va_arg(numlist, int);

	va_end(numlist);
	return (sum);
}
