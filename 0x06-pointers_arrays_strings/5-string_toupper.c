#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - change all lower case to upper
 * @str: sting to be changed
 * Return: returns a character
 */

char *string_toupper(char *)
{
	int i = 0;
	char str = *;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		return (str);
	}
}
