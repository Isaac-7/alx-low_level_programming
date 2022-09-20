#include "main.h"

/**
 * swap_int -> swap values
 * @a: first argument
 * @b: 2nd argument
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
