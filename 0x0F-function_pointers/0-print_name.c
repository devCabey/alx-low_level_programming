#include <stdlib.h>
/**
 * print_name - Prints a name
 *
 * @name: A string
 *
 * @f: A function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
