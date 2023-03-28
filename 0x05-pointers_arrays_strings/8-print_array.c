#include <stdio.h>

/**
 * print_array - print n  elements of an array of integers
 *
 * @a: pointer for type int
 *
 * @n: pointer for type int
 *
 * Return: void (Success)
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

}
