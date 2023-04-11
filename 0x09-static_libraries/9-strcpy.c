#include <stdio.h>

/**
 * *_strcpy -  copies the string pointed to by src
 *
 * @dest: pointer to char type
 *
 * @src: pointer to char type
 *
 * Return: pointer (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
