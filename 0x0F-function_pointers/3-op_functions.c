#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two integers
 *
 * @a: an integer
 *
 * @b: an integer
 *
 * Return: an integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of two numbers
 *
 * @a: An integer
 *
 * @b: An integer
 *
 * Return: An integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: An integer
 *
 * @b: An integer
 *
 * Return: An integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division two numbers
 *
 * @a: An integer
 *
 * @b: an integer
 *
 * Return: An integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo of two numbers
 *
 * @a: An integer
 *
 * @b: An integer
 *
 * Return: an integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
