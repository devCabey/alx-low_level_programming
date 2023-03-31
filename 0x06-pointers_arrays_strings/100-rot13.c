#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 *
 * @c: A String
 *
 * Return: A String
 */

char *rot13(char *c)
{
	int i = 0, j;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (c[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i]  == s1[j])
			{
				c[i] = s2[j];
				break;
			}
		}
		i++;
	}

	return (c);
}
