#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: An integer value
 *
 * Return: The last digit of num
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num > 0)
	{
		last_digit = num % 10;
		return (last_digit);
	}
	else if (num < 0)
	{
		last_digit = num % 10;
		return (-last_digit);
	}
	else
	{
		return (0);
	}
}
