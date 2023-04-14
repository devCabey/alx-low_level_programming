#include <stdlib.h>

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

	if (nmemb != 0 && size != 0)
	{
		ptr = malloc(nmemb * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
