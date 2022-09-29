#include "main.h"

/**
 * _strlen_recursion - length
 * @s: string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
