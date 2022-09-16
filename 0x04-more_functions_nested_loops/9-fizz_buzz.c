#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers to 100
 *
 * Return: nothing
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf(i);
			putchar(' ');
		}
	}
	putchar('\n');
}
