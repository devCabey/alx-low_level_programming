/**
 * prime_num - finds prime number
 *
 * @i: An integer
 *
 * @j: An integer
 *
 * Return:An integer
 */

int prime_num(int i, int j)
{
	if (j < i)
	{
		if (i % j == 0)
		{
			return (0);
		}
		else
		{
			return (prime_num(i, j + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Tells whether or not a number is a prime number
 *
 * @n: An integer
 *
 * Return: 1 for integer and 0 for non integer
 */

int is_prime_number(int n)
{
	if (n > 3)
	{
		return (prime_num(n, 2));
	}
	else if (n < 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
