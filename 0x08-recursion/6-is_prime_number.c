#include "main.h"

/**
* prime_checker - checks if a number is a prime number
* @n: the number to be checked
* @a: number to start checking from
*
* Return: 1 if prime else 0
*/
int prime_checker(int n, int a)
{
	if (a < 2)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	return (prime_checker(n, a - 1));
}

/**
* is_prime_number - checks if an input int is a prime number
* @n: the number to checked
*
* Return: 1 if prime else 0
*/
int is_prime_number(int n)
{
	int a = n / 2;

	if (n < 2)
	{
		return (0);
	}
	return (prime_checker(n, a));
}
