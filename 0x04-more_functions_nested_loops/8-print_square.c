#include "main.h"

/**
 * print_square - Draws a square on the terminal
 *
 * @size: Integer value
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 1;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
