#include "main.h"

/**
 * print_alphabet - print all alphabet
 *
 * Return: void (Success)
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(48 + alph);
	}
	_putchar('\n');

	return (0);
}
