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
			if (i < 10)
				_putchar(0 - '0');
			_putchar(i - '0');
			_putchar(':');
			if (j < 10)
				_putchar(0 - '0');
			_putchar(j - '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
