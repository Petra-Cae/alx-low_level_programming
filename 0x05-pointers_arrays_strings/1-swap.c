#include "main.h"

/**
*swap_int - Function that swaps the values of two intergers
*@a: The first interger
*@b: The second interger
*
*Return: void
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
