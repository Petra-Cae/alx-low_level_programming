#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - adds positive numbers
* @argc: arguments
* @argv: array containing argc
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int a, b, sum = 0;

	for (a = 0; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
