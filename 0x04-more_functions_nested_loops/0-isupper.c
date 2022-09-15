#include "main.h"

/**
 * _isupper - checks case of letter
 * @c: character test
 * REturn: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

