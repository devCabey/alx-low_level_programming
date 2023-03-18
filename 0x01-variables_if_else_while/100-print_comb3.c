#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int f;
	int s;

	for (f = 0; f < 10; f++)
	{
		for (s = f + 1; s < 10; s++)
		{
			putchar(48 + f);
			putchar(48 + s);
			if (f == 8 && s == 9)
			{}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
