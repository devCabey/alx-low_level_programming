#include <stdio.h>

/**
 * _strcmp - compares two string
 *
 * @s1: A string
 *
 * @s2: A string
 *
 * Return: An integer (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (i >= 0)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		if (s1[i] == s2[i] && s1[i] == '\0')
		{
			diff = 0;
			break;
		}
		i++;
	}
	return (diff);
}
