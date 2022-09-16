#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: number of - to print
 * Return: nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
		
	}
	putchar('\n');
}
