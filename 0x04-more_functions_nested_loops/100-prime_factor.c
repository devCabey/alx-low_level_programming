#include <stdio.h>

/**
 * main - Print the highest prime factor of the number 612852475143
 *
 * Return - 0 
 */

int is_prime(long int);

int main(void)
{
	long int n, value, stop, hpf;

	n = 2;
	value = 1231952;
	for (n = 2; n < value; n++)
	{
		if (value % n == 0)
		{
			stop = value / n;

			if (!is_prime(stop))
			{
				printf("%ld - %ld\n",n,stop);
				continue;
			}
			else
			{
				hpf = stop;
				break;
			}
		}

	}
	printf("%ld\n", hpf);

	return (0);
}

int is_prime(long int n)
{
	long int i;

	if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
