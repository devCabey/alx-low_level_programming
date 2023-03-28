#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates valid password for program 101-crackme
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j;
	time_t t;

	i = 0;
	j = 0;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((i + j) > 2772)
			break;
		j += i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));

	return (0);
}
