#include "main.h"

/**
 * jack_bauer - Prints every minute fo the day
 *
 * Return: void (Success)
 */

void jack_bauer(void)
{
	int i = 0;

	while (i < 25)
	{
		int j = 0;

		while (j < 60)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
