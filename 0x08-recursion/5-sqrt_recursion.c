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
