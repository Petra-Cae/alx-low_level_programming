#include <stdio.h>
#include "main.h"

/**
* main - prints the program's name
* @argc: arguments
* @argv: array containing arguments
*
*Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
