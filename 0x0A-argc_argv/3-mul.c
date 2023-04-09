#include <stdlib.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc > 2 && argc < 4)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
