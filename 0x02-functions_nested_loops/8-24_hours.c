#include "main.h"

/**
 * jack_bauer - Prints every minute fo the day
 *
 * Return: void (Success)
 */

void jack_bauer(void)
{
	int h1,h2,m1,m2;

	h1 = 0;

	while (h1 < 3)
	{
		_putchar(h1);

		h2 = 0;

		while (h2 < 10)
		{
			if (h1 == 2 && h2 > 4)
			{
				break;
			}
			else
			{
				m1 = 0;

				while (m1 < 6)
				{
					m2 = 0;

					while (m2 < 10)
					{
						_putchar(h1 +'0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar('\n');

						m2++;
					}

					m1++;
				}
			}

			h2++;
		}

		h1++;
	}
}
