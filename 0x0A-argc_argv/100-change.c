#include <stdlib.h>
#include <stdio.h>

/**
 * num_change - Return the number of coins to make change
 *
 * @n: amount in integer
 *
 * @y: number of coins in integer
 *
 * Return: Integer
 */

int num_change(int n, int y)
{
	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			y++;
		}
		else if (n >= 10)
		{
			n -= 10;
			y++;
		}
		else if (n >= 5)
		{
			n -= 5;
			y++;
		}
		else if (n >= 2)
		{
			n -= 2;
			y++;
		}
		else
		{
			n -= 1;
			y++;
		}
	}

	return (y);
}

/**
 * main - Program entry point
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int remainder,  cent;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	remainder = atoi(argv[1]);

	if (remainder < 0)
	{
		printf("0\n");
	}
	else
	{
		cent = num_change(remainder, 0);
		printf("%d\n", cent);
	}

	return (0);
}
