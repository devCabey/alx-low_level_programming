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
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j])
		{
			if (accept[i] == s[j])
			{
				k++;
				break;
			}
			j++;
		}

		i++;
	}
	return (k);
}
