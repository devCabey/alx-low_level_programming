#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: Integer value
 *
 * Return: void (Success)
 */

void print_line(int n)
{
	int line;

	line = 0;
	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
