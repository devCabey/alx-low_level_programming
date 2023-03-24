#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j, f, s;

	for (i = 0; i <= 10; i++)
	{
		for (j =0; j <= 14; j++)
		{
			f = j / 10;
			s = j % 10;

			if (j >= 10)
			{
				_putchar(f + 48);
			}
				_putchar(s + 48);
		}
		_putchar('\n');
	}
}
