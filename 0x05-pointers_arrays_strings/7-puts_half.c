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
	half = ceil(size / 2);

	while (str[half])
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
