#include "main.h"
#include <math.h>

/**
 * times_table - Prints the times table, starting from zero
 *
 * Return: Always void (Success)
 */

void times_table(void)
{
	int i, j, times, f, s;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			times = i * j;
			if (times < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(times + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				s = times % 10;
				f = floor(times / 10);
				if (j != 0)
					_putchar(' ');
				_putchar(f + '0');
				_putchar(s + '0');
				if (j != 9)
					_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
