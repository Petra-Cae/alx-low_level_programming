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

	printf("Size of int: %d bytes\n", sizeof(a));
	printf("Size of float: %d bytes\n", sizeof(b));
	printf("Size of char: %d bytes\n", sizeof(c));
	printf("Size of long int: %d bytes\n", sizeof(d));
	printf("Size of long long int: %d bytes\n", sizeof(e));
	return (0);
}
