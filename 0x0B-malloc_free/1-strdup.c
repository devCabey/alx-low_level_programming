#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory
 *
 * @str: A string
 *
 * Return: A pointer to a string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str != NULL)
	{
		ptr = malloc(sizeof(str) + 1);
		if (ptr != NULL)
		{
			while (str[i])
			{
				ptr[i] = str[i];
				i++;
			}
		}
		else
		{
			return (NULL);
		}

		ptr[i] = '\0';

		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
