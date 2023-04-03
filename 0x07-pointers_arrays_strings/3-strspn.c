/**
 * _strspn - GGets the length of a prefix substring
 *
 * @s: A string
 *
 * @accept: A string
 *
 * Return: An unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (accept[i])
	{
		while (s[j])
		{
			if (accept[i] == s[j])
			{
				return (j + 1);
			}
			j++;
		}

		i++;
	}
	return (0);
}
