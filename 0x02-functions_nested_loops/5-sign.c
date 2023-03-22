#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: ASCII Character
 *
 * Return: 1 if n is greater than zero, 0 if n is zero and -1 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
