#include "main.h"

/**
 * _isupper - Checks whether or not a character is uppercase or lower case
 *
 * @c: ASCII character
 *
 * Return: 1 for uppercase, 0 otherwise (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
