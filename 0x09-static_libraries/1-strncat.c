#include <stdio.h>

/**
 * _strncat - Concatenates two strings depending on n
 *
 * @dest: A string
 *
 * @src: A string
 *
 * @n: An integer
 *
 * Return: A string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destSize = 0;
	int i = 0;

	while (dest[destSize])
	{
		destSize++;
	}
	while (src[i] && n--)
	{
		dest[destSize] = src[i];
		destSize++;
		i++;
	}

	return (dest);
}
