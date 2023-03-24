#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j, s;

	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				s = j % 10;
				_putchar(1 + 48);
				_putchar(s + 48);
			}
			else
			{
				_putchar(j + 48);
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
