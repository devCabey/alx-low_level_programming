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
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			c = str[i];
			putchar(c);
		}
		i++;
	}
	putchar('\n');

}
