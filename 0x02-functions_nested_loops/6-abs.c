#include "main.c"
/**
 * _abs -function for absolute value
 * @c: int for argument
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		return(c * -1);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
		return (0);
}

