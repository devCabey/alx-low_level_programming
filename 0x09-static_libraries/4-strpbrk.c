/**
 * _strpbrk - Search a string for any of a set of bytes
 *
 * @s: A String
 *
 * @accept: A String
 *
 * Return: Pointer to a character
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *c;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				c = &s[i];
				return (c);
			}
			j++;
		}
		i++;
	}
	return (0);
}
