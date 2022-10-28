#include "main.h"

/**
 * clear_bit - sets
 * @n: pointer
 * @index: index
 *
 * Return: 1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long it) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
