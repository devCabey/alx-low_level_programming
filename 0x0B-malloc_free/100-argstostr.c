#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of your program
 *
 * @ac: An integer
 *
 * @av: A pointer to a pointer to a String
 *
 * Return: A Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;

	int i = 0, j = 0, k = 0, len = 0, t = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		while (k < ac)
		{
			len += strlen(av[k]);
			len++;
			k++;
		}
		ptr = malloc((sizeof(char) * len) + 1);
		if (ptr == 0)
		{
			return (NULL);
		}
		while (i < ac)
		{
			j = 0;
			for (; av[i][j] != '\0';t++)
			{
				ptr[t] = av[i][j];
				j++;
			}
			ptr[t++] = '\n';
			i++;
		}
	}

	return (ptr);
}
