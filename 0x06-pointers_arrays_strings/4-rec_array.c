#include "main.h"

/**
* reverse_array - Reverses an array of intergers
* @a: an array of intergers
* @n: number of elements to be swapped
*
*Return: void
*/

void reverse_array(int *a, int n)
{
	int b, f;

	b = 0;
	n = n - 1;
	while (b < n)
	{
		f = *(a + b);
		*(a + b) = *(a + n);
		*(a + n) = f;
		b++;
		n--;
	}
}
