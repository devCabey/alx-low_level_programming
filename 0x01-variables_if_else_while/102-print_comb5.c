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
	int fo;

	for (f = 0; f < 10; f++)
	{
		for (s = 0; s < 10; s++)
		{
			for (t = f; t < 10; t++)
			{
				for (fo = s + 1; fo < 10; fo++)
				{
					putchar(48 + f);
					putchar(48 + s);
					putchar(' ');
					putchar(48 + t);
					putchar(48 + fo);
					if (f == 9 && s == 8 && t == 9 && fo == 9)
					{}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
