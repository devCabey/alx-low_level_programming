/**
 * square_root - find the square root of a number recursively
 *
 * @i: An integer
 *
 * @y: An integer
 *
 * Return: Integer
 */

int square_root(int i, int y)
{
	if (i * i <= y)
	{
		if (i * i == y)
		{
			return (i);
		}
		else
		{
			square_root(i + 1, y);
		}
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: An integer
 *
 * Return: An integer
 */

int _sqrt_recursion(int n)
{
	return (square_root(1, n));
}
