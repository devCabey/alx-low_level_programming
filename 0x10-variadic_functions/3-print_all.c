#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - Prints anything
 *
 * @format: A string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s;
	va_list list;

	va_start(list, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				printf("%s", s == NULL? "(nil)" : s);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0')
		{
			if (format[i] == 's' || format[i] == 'c' ||
					format[i] == 'f' || format[i] == 'i')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
