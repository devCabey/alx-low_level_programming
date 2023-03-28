#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s:  A pointer to char
 *
 * Return: void (Success)
 */

void print_rev(char *s)
{
	int size;
	char c;

	size = 0;
	while (s[size])
	{
		size++;
	}
	while (size--)
	{
		c = s[size];
		putchar(c);
	}
	putchar('\n');
}
