#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: number of - to print
 * Return: nothing
 */

void print_line(int n);
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
