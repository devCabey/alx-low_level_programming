#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: Size of array in int
 *
 * @c: Character to initialize with
 *
 * Return: A string
 */

char *create_array(unsigned int size, char c)
{
	char *data;
	unsigned int i;

	if (size > 0)
	{
		data = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			data[i] = c;
		}
	}
	else
	{
		return (NULL);
	}

	return (data);
}
