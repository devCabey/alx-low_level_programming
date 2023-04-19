#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	unsigned char *f;
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = (unsigned char *)main;
	j = 0;
	while (j < i)
	{
		printf("%02x ", f[j]);
		j++;
	}
	printf("\n");

	return (0);
}
