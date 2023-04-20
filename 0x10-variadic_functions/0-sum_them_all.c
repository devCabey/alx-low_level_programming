#include <stdarg.h>

/**
 * sum_them_all - Sums all of its parameters
 *
 * @n: An unsigned integer
 *
 * Return: An integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i, sum = 0;

	va_start(var, n);
	if (n == 0)
		return (0);

	i = 0;
	while (i < n)
	{
		sum += va_arg(var, int);
		i++;
	}
	va_end(var);

	return (sum);
}
