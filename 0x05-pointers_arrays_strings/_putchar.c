#include <unistd.h>
#include "main.h"

/**
*_putchar - char c to stdout
*@c: the char
*
*Return: 0
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
