#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all numbers from n to 98
 *
 * @n: Integer value
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
			}
			_putchar(' ');
		}
	}
}
