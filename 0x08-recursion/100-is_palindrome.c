/**
 * str_length - Return length of string
 *
 * @s: A String
 *
 * Return: An integer
 */

int str_length(char *s)
{
	int i;

	i = 1;
	if (*s != '\0')
	{
		return (i + str_length(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * palindrome_checker - Checks for palindrome
 *
 * @s: A string
 *
 * @j: An integer
 *
 * @k: An integer
 *
 * Return: An integer
 */

int palindrome_checker(char *s, int j, int k)
{
	if (j < k)
	{
		if (s[j] != s[k - j - 1])
		{
			return (0);
		}
		else
		{
			return (palindrome_checker(s, j + 1, k));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - Returns 1 if a string is a palidrome
 *
 * @s: A string
 *
 * Return: An integer
 */

int is_palindrome(char *s)
{
	int ln = str_length(s);

	if (ln != 0)
	{
		return (palindrome_checker(s, 0, ln));
	}
	else
	{
		return (0);
	}
}
