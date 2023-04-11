#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
		i = strlen(str);
		ptr = malloc(sizeof(char) * i);
		if (ptr != NULL)
		{
			ptr[i] = '\0';
			while (str[--i])
			{
				ptr[i] = str[i];
			}
		}
		else
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
