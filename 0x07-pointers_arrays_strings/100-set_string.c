#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: a pointer to a pointer
* @to: location of the char
*
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
