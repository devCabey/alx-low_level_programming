#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: An unsigned integer
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr)
	{
		return (ptr);
	}
	else
	{
		exit(98);
	}
}
