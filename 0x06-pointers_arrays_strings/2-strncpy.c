#include <stdio.h>

/**
 * _strncpy - Copies a string
 *
 * @dest: string
 *
 * @src: string
 *
 * @n: integer
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, destSize = 0;

	while (dest[destSize])
	{
		destSize++;
	}
	while (src[i] && n--)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		while (i < destSize)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
