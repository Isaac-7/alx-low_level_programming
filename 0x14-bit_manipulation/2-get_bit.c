#include "main.h"

/**
 * get_bit - Gets
 * @n: the bit
 * @index: The index
 *
 * Return: if an error
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
