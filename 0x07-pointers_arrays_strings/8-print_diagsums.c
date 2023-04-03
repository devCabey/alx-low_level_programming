#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: An array of integers
 *
 * @size: Array size as an integer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1, d2;

	i = 0;
	d1 = 0;
	d2 = 0;
	j = size - 1;
	while (i < size)
	{
		d1 += a[i];
		d2 += a[j - i];
		a += size;
		i++;
	}
	printf("%d, %d\n", d1, d2);
}
