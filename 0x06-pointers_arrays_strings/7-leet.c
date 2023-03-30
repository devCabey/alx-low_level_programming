#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 *
 * @c: string
 *
 * Return: string
 */

char *leet(char *c)
{
	int i = 0, j;

	struct code
	{
		char f;
		char s;
		int value;
	};

	struct code coder[5] = {
		{'a', 'A', 4},
		{'e', 'E', 3},
		{'o', 'O', 0},
		{'t', 'T', 7},
		{'l', 'L', 1}
	};

	while (c[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i]  == coder[j].f || c[i] == coder[j].s)
			{
				c[i] = (coder[j].value + '0');
				break;
			}
		}
		i++;
	}

	return (c);
}
