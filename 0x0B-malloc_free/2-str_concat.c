#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: A string
 * @s2: A String
 * Return: A pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, x, y, z;
	char *ptr;

	if (s1 == NULL)
		i = strlen("");
	else
		i = strlen(s1);
	if (s2 == NULL)
		j = strlen("");
	else
		j = strlen(s2);
	k = i + j + 1;
	ptr = malloc(sizeof(char) * k);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		x = 0, y = 0;
		for (z = 0; z < k; z++)
		{
			if (z < i)
			{
				ptr[z] = s1[x];
				x++;
			}
			else
			{
				ptr[z] = s2[y];
				y++;
			}
		}
		ptr[z] = '\0';
	}
	return (ptr);
}
