#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) Always (Success)
*/

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
