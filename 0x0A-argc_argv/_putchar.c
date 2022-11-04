#include <unistd.h>
#include "main.h"

/**
*_putchar - prints char c to stdout
*@c: the char
*
*Return: char
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
