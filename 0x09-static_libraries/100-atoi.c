#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: String
 *
 * Return: Integer (Success)
 */

int _atoi(char *s)
{
	unsigned int count, size, i, j, k, z;

	count = 0;
	size = 0;
	i = 0;
	j = 1;
	k = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
		{
			j *= -1;
		}

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
			{
				k *= 10;
			}
			size++;
		}
		count++;
	}

	for (z = count - size; z < count; z++)
	{
		i = i + ((*(s + z) - 48) * k);
		k /= 10;
	}
	return (i * j);
}
