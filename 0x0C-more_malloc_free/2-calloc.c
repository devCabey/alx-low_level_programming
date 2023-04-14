#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: An array of unsigned integers
 *
 * @size: Size of array in int
 *
 * Return: A pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
