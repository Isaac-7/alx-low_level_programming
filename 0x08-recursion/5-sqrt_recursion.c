#include "main.h"

/**
 * _sqrt_recursion - returns natural square root
 * @n: value
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);

	}
	else
		return (_sqrt(0, n));
}

/**
 * _sqrt - return square root
 * @n: test number
 * @x: square
 *
 * Return: square root
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
