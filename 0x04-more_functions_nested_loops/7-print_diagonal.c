#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: Integer value
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int diagonal, check;

	if (n > 0)
	{
		diagonal = 0;
		while (diagonal < n)
		{
			check = 0;
			while (check  < diagonal)
			{
				_putchar(' ');
				check++;
			}
			_putchar('\\');
			_putchar('\n');
			diagonal++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
