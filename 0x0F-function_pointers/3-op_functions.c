#include "3-calc.h"

/**
* op_add - sums two numbers
* @a: first number
* @b: second number
*
* Return: sum of the numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts numbers
* @a: number to subtract from
* @b: number to be subtracted from a
*
* Return: difference of the numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two numbers
* @a: number to be multiplied
* @b: number to be multiplied
*
* Return: product of the numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two numbers
* @a: the dividend
* @b: the divisor
*
* Return: the quotient
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - divides two numbers
* @a: the dividend
* @b: the divisor
*
* Return: the remainder of the division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
