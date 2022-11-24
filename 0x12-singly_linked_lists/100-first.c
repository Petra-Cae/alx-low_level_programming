#include <stdio.h>

void __attribute__((constructor)) primero(void);
/**
* primero - print this before the main function
*/
void primero(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
