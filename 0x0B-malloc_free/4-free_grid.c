#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array
 *
 * @grid: A pointer to a pointer to an integer
 *
 * @height: An integer
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
