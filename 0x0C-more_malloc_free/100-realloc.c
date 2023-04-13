#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: A pointer 
 *
 * @old_size: An unsigned integer
 *
 * @new_size: An unsigned integer
 *
 * Return: A pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *myp, *ptr1 = (int *)ptr;
	int i, min;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	myp = malloc(new_size);
	if (old_size > new_size)
		min = new_size;
	else
		min = old_size;
	if (myp != NULL)
	{
		i = ptr1[0];
		j = 0;
		while (i < min)
		{
			if (j < old_size)
				myp[j] = i;
			i++;
			j++;
		}
		return (myp);
	}
	else
	{
		return (NULL);
	}
}
