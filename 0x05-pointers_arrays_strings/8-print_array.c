include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements
 * @a: array
 * @n: number of elements
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n -1)
			printf("%d,", a[i]);
		else printf("%d", a[inc]);
	}
	putchar('\n');
}
