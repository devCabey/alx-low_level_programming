#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints numbers followed by a new line
 *
 * @seperator: A string
 *
 * @n: An unsigned integer
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
		return;
	i = 0;
	va_start(list, n);
	while (i < n)
	{
		printf("%d%s", va_arg(list, int),
			       (seperator != NULL && i != (n - 1)) ? seperator : "");
		i++;
	}
	va_end(list);
	printf("\n");
}
