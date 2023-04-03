/**
 * _strstr - locates a substring
 *
 * @haystack: A string
 *
 * @needle: A string
 *
 * Return: A String
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *c;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] == haystack[i + j])
			{
				k = 1;
			}
			else
			{
				k = 0;
			}
			j++;
		}
		if (k == 1)
		{
			c = &haystack[i];
			break;
		}
		i++;
	}
	return (c);
}
