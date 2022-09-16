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

	while (i <= n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
