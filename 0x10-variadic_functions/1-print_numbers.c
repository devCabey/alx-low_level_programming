#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints numbers followed by a new line
 *
 * @separator: A string
 *
 * @n: An unsigned integer
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	i = 0;
	va_start(list, n);
	while (i < n)
	{
		printf("%d%s", va_arg(list, int),
			       (separator != NULL && i != (n - 1)) ? separator : "");
		i++;
	}
	va_end(list);
	printf("\n");
}
