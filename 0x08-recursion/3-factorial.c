/**
 * factorial - Returns the factorial of a given number
 *
 * @n: An integer
 *
 * Return: An integer
 */

int factorial(int n)
{
	if (n != 0)
	{
		if (n >= 1)
		{
			return (n * factorial(n - 1));
		}
		else
		{
			return (n * factorial(n + 1));
		}
	}
	else
	{
		return (1);
	}
}
