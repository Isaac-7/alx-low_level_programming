#include "main.h"

/**
 * string_toupper - change all lower case to upper
 * @str: sting to be changed
 * Return: returns a string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
