#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: An integer
 */

int main(int argc, char *argv[])
{
	int i, j, ans;
	int (*k)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	k = get_op_func(argv[2]);

	if (k == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = k(i, j);
	printf("%d\n", ans);

	return (0);
}
