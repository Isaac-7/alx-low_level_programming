#include <stdio.h>
#include "main.h"

/**
 * more_numbers -prints ten times the numbers
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			putchar(b);
		}
	putchar('\n');
	}
}
