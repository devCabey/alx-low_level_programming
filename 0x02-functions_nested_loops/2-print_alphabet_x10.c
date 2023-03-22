#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void Always (Success)
 */

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_puthchar('\n');
		num++;
	}
}
