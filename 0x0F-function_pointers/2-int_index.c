#include <stdlib.h>

/**
 * int_index - Searhes for an integer
 *
 * @array: An array of integers
 *
 * @size: An integer
 *
 * @cmp: A function pointer
 *
 * Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	i = 0;
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			j = cmp(array[i]);
			if (j != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
