#include "main.h"

/**
 * is_prime_number - checks prime
 * @n: number
 *
 * Return: 1 if prime, 0 not
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if prime
 * @n: number
 * @start: to start from
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime(int n, int start)
{
	if (start <= 1)
	{
		return (1);
	}
		else if (n % start == 0)
			return (0);
		return (is_prime(n, start - 1));
	}
