#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc - An integer
 *
 * @argv - An array of integers
 *
 * Return: An integer
 */

int main(int argc, char **argv)
{
	if (argc < 3 && argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!argv)
	{
		exit(98);
	}
	return (0);
}
