#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n
		;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
