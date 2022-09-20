#include "main.h"

/**
 * _strcpy - copy and paste
 * @dest: dest
 * @src: src
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
