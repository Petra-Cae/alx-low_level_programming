#include "3-calc.h"
#include <stdio.h>

/**
* main - prints results of simple arithmetic operations
* @argc: the number of arguments
* @argv: array of pointers to the arguments
*
* Return: 0 (success) else 98 or 99 (fail)
*/
int main(int argc, char *argv[])
{

	int x, y, z;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	z = (*opr)(x, y);

	printf("%d\n", z);
	return (0);
}
