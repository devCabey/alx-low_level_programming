#include <stdio.h>

/**
 * rev_string - reverse a string
 *
 * @s: pointer to char
 *
 * Return: void (Success)
 */

void rev_string(char *s)
{
	int size;
	int i, half;
	char temp;

	size = 0;
	while (s[size])
	{
		size++;
	}

	half = size / 2;
	i = 0;
	while (half--)
	{
		temp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = temp;
		i++;
	}
}
