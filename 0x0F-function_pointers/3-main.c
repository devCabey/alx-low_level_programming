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
	char *k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	k = argv[2];

	if (get_op_func(k) == NULL || k[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*k == '/' && j == 0) || (*k == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ans = get_op_func(k)(i, j);
	printf("%d\n", ans);

	return (0);
}
