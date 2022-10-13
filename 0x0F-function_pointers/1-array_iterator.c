#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: to iterate over
 * @size: array size
 * @action pointer to function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
