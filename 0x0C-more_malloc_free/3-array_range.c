#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: An integer
 *
 * @max: An integert
 *
 * Return: An pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
