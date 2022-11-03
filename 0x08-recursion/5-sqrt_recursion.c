#include "main.h"

/**
* _sqrt - finds the square root of a number
* @n: the number
* @sr: square root
*
* Return: the square root
*/
int _sqrt(int n, int sr)
{
	if (sr * sr == n)
	{
		return (sr);
	}
	else if (sr * sr < n)
	{
		return (_sqrt(n, sr + 1));
	}
	else
	{
		return (-1);
	}
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
*
*Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(n, 1));
}
