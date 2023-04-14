#include <stdlib.h>
#include <string.h>

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
	int *myp;
	int min;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		myp = malloc(new_size);
		return (myp);
	}

	myp = malloc(new_size);
	if (old_size > new_size)
		min = new_size;
	else
		min = old_size;
	if (myp == NULL)
		return (NULL);

	memcpy(myp, ptr, min);
	free(ptr);

	return (myp);
}
