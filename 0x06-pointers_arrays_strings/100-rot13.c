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
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s4[] = "nopqrstuvwxyzabcdefghijklm";

	while (c[i])
	{
		for (j = 0; j < 26; j++)
		{
			if (c[i]  == s1[j] || c[i] == s2[j])
			{
				c[i] = s4[j];
				break;
			}
		}
		i++;
	}

	return (c);
}
