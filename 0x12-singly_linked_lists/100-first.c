#include <stdio.h>

void primero(void) __attribute__ ((constructor));
/**
* primero - print this before the main function
*/
void primero(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
