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
	unsigned int i;

	if (nmemb && size != 0)
	{
		ptr = malloc(sizeof(unsigned int) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i < size)
			{
				ptr[i] = nmemb;
				i++;
			}
		}
		free(ptr);
		return (ptr); }
	else
	{
		return (NULL);
	}
}
