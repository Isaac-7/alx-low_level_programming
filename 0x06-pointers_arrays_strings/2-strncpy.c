#include "main.h"
#include <string.h>

/**
 * _strncpy -> copy function
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
