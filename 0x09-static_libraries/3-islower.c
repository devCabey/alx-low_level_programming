#include "main.h"

/**
 * _islower - Checks whether or not a character is lower
 *
 * @c: ASCII character
 *
 * Return: Always 1 or 0 (Success) where 1 is lower and 0 is otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
