#include <stdio.h>
/**
 * main - Print the size of various types on its computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	char c;
	long int d;
	long long int e;

	printf("Size of a int: %d bytes\n", sizeof(a));
	printf("Size of a float: %d bytes\n", sizeof(b));
	printf("Size of a char: %d bytes\n", sizeof(c));
	printf("Size of a long int: %d bytes\n", sizeof(d));
	printf("Size of a long long int: %d bytes\n", sizeof(e));
	return (0);
}
