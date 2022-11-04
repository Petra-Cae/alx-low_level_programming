#include <stdio.h>
#include "main.h"

/**
* main - prints number of arguments passed into it
* @argc: arguments
* @argv: array containing argc
*
*Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i - 1]);
	}
	return (0);
}
