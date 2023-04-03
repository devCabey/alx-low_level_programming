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

	while (s[i])
	{
		if (s[i] == c)
		{
			f = &s[i];
			break;
		}

		i++;
	}
	return (f);
}
