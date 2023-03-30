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
	int i = 0, j = 0, k;
	int cap[]  = {32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (c[i])
	{
		for (k = 0; k < 11; k++)
		{
			if (c[i] == cap[k])
			{
				if (c[i + 1] > 96 && c[i + 1] < 123)
				{
					j = c[i + 1] - 32;
					c[i + 1] = (char) j;
				}
				break;
			}
		}
		if (c[i] == '\t' || c[i] == '\n')
		{
			if (c[i] == '\t')
				c[i] = ' ';
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
