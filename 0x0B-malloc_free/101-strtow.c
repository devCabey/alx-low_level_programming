#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words
 *
 * @str: A String
 *
 * Return: A pointer to an array of string
 */

char **strtow(char *str)
{
	char **ptr;
	int i, j, f, l, k = 0, counter = 0, len, z;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
		{
			counter++;
		}
		i++;
	}
	counter++;

	ptr = malloc(sizeof(*ptr) * counter);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < counter; j++)
	{
		f = 0, l = 0;
		while (str[k])
		{
			if (str[k] != ' ')
			{
				f = k;
				k++;
				break;
			}
			k++;
		}
		while (str[k])
		{
			if (str[k + 1] == '\0')
			{
				l = k;
				k++;
				break;
			}
			else if (str[k] != ' ' && str[k + 1] == ' ')
			{
				l = k;
				k++;
				break;
			}
			k++;
		}
		len = l - f + 1;
		if (len > 0)
		{
			ptr[j] = malloc(sizeof(**ptr) * len);
			for (z = 0; z < len; z++)
			{
				if (f <= l)
				{
					ptr[j][z] = str[f];
					f++;
				}
			}
		}
	}
	return (ptr);
}
