#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		while (n != 50 || n != 52)
		{
			putchar(n);
		}
	}
	putchar('\n');
}
