#include "main.h"
#include <string.h>

/**
 * puts2 -> puts2 function
 * @str: str Parameter
 */
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
