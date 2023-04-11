#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: ASCII Character
 *
 * Return: 1 if letter and 0 othewise (Success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
