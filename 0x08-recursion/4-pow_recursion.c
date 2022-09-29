#include "main.h"

/**
 * _pow_recursion - returns val of x to raised power of y
 * @x: number
 * @y: exponent
 * Return: x  ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
