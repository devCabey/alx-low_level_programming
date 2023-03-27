#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to an integer
 *
 * @b: Pointer to an integer
 *
 * Return: void (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
