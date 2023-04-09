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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
