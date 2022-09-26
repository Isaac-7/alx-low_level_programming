#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: address
 * @b: char
 * @n: number
 *
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
