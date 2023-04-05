/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: A string
 *
 * Return: Integer
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
