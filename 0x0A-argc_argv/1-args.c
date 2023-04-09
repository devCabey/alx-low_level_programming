#include <stdlib.h>
#include <stdio.h>

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
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
