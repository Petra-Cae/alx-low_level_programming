#include "main.h"

/**
* print_chessboard - prints a chessboard
* @a: array containing a chess board
*
* Return: null
*/

void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; a[m][7]; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
	}

}
