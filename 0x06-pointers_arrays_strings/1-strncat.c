#include "main.h"
#include <string.h>

/**
 * _strncat -> append some char
 * @dest: dest
 * @src: src
 * @n: max length
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
