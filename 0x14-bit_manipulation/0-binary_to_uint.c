#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, j;

	if (!b)
		return (0);

	num = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, j = 1; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += base_two;
		}
	}

	return (num);
}
