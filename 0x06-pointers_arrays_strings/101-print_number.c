#include "main.h"

/**
 * recurse - Print integer
 *
 * @i: Unsigned Integer
 *
 * Return: void
 */
void recurse(unsigned int i)
{
	unsigned int j, k;

	j  = i / 10;
	k = i % 10;
	if (j >= 10)
	{
		recurse(j);
	}
	else
	{
		if (j > 0)
		{
			_putchar(j + '0');
		}
	}
	_putchar(k + '0');
}
/**
 * print_number - Prints an integer
 *
 * @n: Integer value
 *
 * Return: Void
 */
void print_number(int n)
{
	char minus = '-';
	int i;

	if (n < 0)
	{
		_putchar(minus);
		i = -1 * n;
	}
	else
	{
		i = n;
	}
	recurse(i);
}
