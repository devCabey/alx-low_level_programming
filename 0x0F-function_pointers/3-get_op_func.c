#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function
 *
 * @s: A string
 *
 * Return: A pointer
 */

int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;

	return ((ops[i]).f);
}
