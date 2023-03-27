#include <stdio.h>

/**
 * _strlen - returns the lengght of a string
 *
 * @s: A pointer to char
 *
 * Return: An integer (Success)
 */

int _strlen(char *s)
{
	int size;

	size = 0;
	while (s[size])
	{
		size++;
	}

	return (size);
}
