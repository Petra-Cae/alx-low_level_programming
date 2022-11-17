#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of args passed to the func
 */
void print_all(const char * const format, ...)
{
	va_list strlist;
	char *mystr;
	unsigned int a = 0, b, c = 0;
	const char args[] = "cifs";

	va_start(strlist, format);
	while (format && format[a])
	{
		b = 0;
		while (args[b])
		{
			if (format[a] == args[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(strlist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(strlist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(strlist, double)), c = 1;
			break;
		case 's':
			mystr = va_arg(strlist, char *), c = 1;
			if (mystr == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", mystr);
			break;
		} a++;
	}
	printf("\n"), va_end(strlist);
}
