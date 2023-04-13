#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: A string
 *
 * @s2: A string
 *
 * @n: An unsigned integer
 *
 * Return: A string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = malloc(strlen(s1) + 1 + n);
	unsigned int i = 0, j;

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
