#include "main.h"

/**
 * jack_bauer - Prints evry minute of the day of Jack Bauer
 * from 00:00 - 23:59.
 */

void jack_bauer(void)
{
	int mins, secs;

	for (mins = 0; mins <= 23; mins++)
	{
		for (secs = 0; secs <= 59; secs++)
		{
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar(':');
			_putchar((secs / 10) + '0');
			_putchar((secs % 10) + '0');
			_putchar('\n');
		}
	}
}
