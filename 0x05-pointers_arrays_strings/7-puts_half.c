#include <stdio.h>

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
	half = size / 2;

	while (str[half])
	{
		putchar(str[half++]);
	}
	putchar('\n');
}
