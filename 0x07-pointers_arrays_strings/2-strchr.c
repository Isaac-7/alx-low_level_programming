#include "main.h"

/**
 * _strchr - locates a string
 * @s: string to look for
 * @c: to look through
 *
 * Return: pointer to spot in s or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}

