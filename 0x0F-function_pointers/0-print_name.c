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
	f(name);
}
