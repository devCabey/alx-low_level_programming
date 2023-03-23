#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table starting with 0
 *
 * @n: Integer value
 *
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		printf("Anything");
	}
	else
	{
		int i, j, times, f, s, t;

		i = 0;
		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				times = i * j;
				if (times < 10)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(times + '0');
				}
				else if (times > 9 && times < 100)
				{
					s = times % 10;
					f = floor(times / 10);
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(f + '0');
					_putchar(s + '0');
				}
				else
				{
					t = (times % 100);
					if (t > 9)
					{
						s = floor(t / 10);
						t = t % 10;
					}
					else
					{
						s = 0;
					}
					f = floor(times / 100);
					if (j > 0)
					{
						_putchar(' ');
					}
					_putchar(f + '0');
					_putchar(s + '0');
					_putchar(t + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
