#include <stdio.h>

/**
 * main - Prints 1 to 100, print fizz, buzz and fizzbuzz
 *
 * Return: 0 always (Success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (i != 100)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		i++;
	}
	printf("\n");

	return (0);
}
