#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 *
 * @c: A string
 *
 * Return: String
 */

char *cap_string(char *c)
{
	int i = 0, j = 0;

	while (c[i])
	{
		if (c[i] > 31 && c[i] < 65)
		{
			if (c[i] > 47 && c[i] < 58)
			{}
			else
			{
				if (c[i + 1] > 96 && c[i + 1] < 123)
				{
					j = c[i + 1] - 32;
					c[i + 1] = (char) j;
				}
			}
		}
		if (c[i] == '\t' || c[i] == '\n')
		{
			if (c[i + 1] > 96 && c[i + 1] < 123)
			{
				j = c[i + 1] - 32;
				c[i + 1] = (char) j;
			}
		}

		i++;
	}
	return (c);
}
