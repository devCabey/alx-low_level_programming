#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 *
 * @separator: A string
 *
 * @n: Unsigned integer
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);
		printf("%s%s",
				(str == NULL ? "(nil)" : str),
				((separator != NULL && i < (n - 1)) ? separator : "")
				);
		i++;
	}
	printf("\n");
	va_end(list);
}
