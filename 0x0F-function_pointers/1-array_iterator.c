#include <stddef.h>

/**
 * array_iterator - Executes a function for each element in array
 *
 * @array: A pointer to array of integers
 *
 * @size: Size of array
 *
 * @action: A function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
