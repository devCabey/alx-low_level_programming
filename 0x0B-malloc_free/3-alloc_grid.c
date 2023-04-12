#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * @width: Integer
 *
 * @height: Integer
 *
 * Return: A pointer to an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(*ptr) * height);

		i = 0;
		while (i < height)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			j = 0;
			while (j < width)
			{
				ptr[i][j] = 0;
				j++;
			}
			i++;
		}
	}
	return (ptr);
}
