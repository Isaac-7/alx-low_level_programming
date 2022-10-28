#include "main.h"

/**
 * set_bit - Sets the value
 * @n: A pointer
 * @index: The index
 *
 * Return: if error
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
