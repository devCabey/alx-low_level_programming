#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @c: String
 *
 * Return: string (Success)
 */

char *string_toupper(char *c)
{
	int i = 0, j = 0;

	while (c[i])
	{
		if (c[i] > 96 && c[i] < 122)
		{
			j = c[i] - 32;
			c[i] = (char) j;
		}
		i++;
	}

	return (c);
}
