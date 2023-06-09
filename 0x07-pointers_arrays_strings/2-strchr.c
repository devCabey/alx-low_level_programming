#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: A string
 *
 * @c: A character
 *
 * Return: A pointer or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *f;

	f = NULL;
	if (c != ' ' || c != '\0')
	{
		while (s[i])
		{
			if (s[i] == c)
			{
				f = &s[i];
				return (f);
			}

			i++;
		}
	}
	return (f);
}
