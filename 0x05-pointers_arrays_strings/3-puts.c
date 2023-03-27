#include <stdio.h>

/**
 * _puts - Prints a string followed by a newline
 *
 * @str: Pointer to a char
 *
 * Return: void (Success)
 */

void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while(str[i])
	{
		c = str[i];
		putchar(c);
		i++;
	}
	putchar('\n');

}
