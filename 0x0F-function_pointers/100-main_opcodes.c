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
	char *f;
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		return (2);
	}
	f = (char *)main;
	j = 0;
	while (j < i)
	{
		printf("%02x ", f[j] & 0xff);
		j++;
	}
	printf("\n");

	return (0);
}
