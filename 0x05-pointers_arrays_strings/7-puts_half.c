#include <stdio.h>
#include <math.h>

/**
 * puts_half - prints half of a string
 *
 * @str: pointer to type char
 *
 * Return: void (Success)
 */

void puts_half(char *str)
{
	int size;
	int half;

	size = 0;
	while (str[size])
	{
		size++;
	}
	if ( size % 2 == 0)
	{
		half = size / 2;
	}
	else
	{
		half = (size - 1) /2
	}

	while (str[half])
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
