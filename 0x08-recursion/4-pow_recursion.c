/**
 * _pow_recursion - Returns the value of x raised to the power of y
 *
 * @x: An integer
 *
 * @y: An integer
 *
 * Return: An integer
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y > 0)
		{
			return (x * _pow_recursion(x, y - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}
