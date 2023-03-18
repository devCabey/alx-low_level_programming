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
	int t;

	for (f = 0; f < 10; f++)
	{
		for (s = f + 1; s < 10; s++)
		{
			for (t = s + 1; t < 10; t++)
			{
				putchar(48 + f);
				putchar(48 + s);
				putchar(48 + t);
				if (f == 7 && s == 8 && t == 9)
				{}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
