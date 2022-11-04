#include <stdio.h>
#include "main.h"

/**
* main - prints number of arguments passed into it
* @argc: arguments
* @argv: array containing argc
*
*Return: 0
*/
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
