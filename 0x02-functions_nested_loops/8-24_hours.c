#include "main.h"

/**
 * jack_bauer - Prints JB's minutes
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr, mins;

	for (hr = 0; hr < 24; hr++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
