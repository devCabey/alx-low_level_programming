#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 *
 * @str: Pointer to a char
 *
 * Return: void (Success)
 */

void puts2(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		putchar(c);
		i += 2;
	}
	putchar('\n');

}
