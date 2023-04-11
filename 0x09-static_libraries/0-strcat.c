#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 *
 * @dest: A string
 *
 * @src: A string
 *
 * Return: A string
 */

char *_strcat(char *dest, char *src)
{
	int destSize = 0;
	int i = 0;

	while (dest[destSize])
	{
		destSize++;
	}
	while (src[i])
	{
		dest[destSize] = src[i];
		destSize++;
		i++;
	}

	return (dest);
}
