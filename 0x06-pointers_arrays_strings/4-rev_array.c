#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: An array of integers
 *
 * @n: Size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j,  k;

	k = n / 2;

	for (i = 0; i < k; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
