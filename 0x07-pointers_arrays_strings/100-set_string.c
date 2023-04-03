#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 *
 * @s: a pointer to a pointer to char
 *
 * @to: a pointer to char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;

}
