#include <unistd.h>

/**
 * _putchar - writes char
 * @c: char
 *
 * Return: On sucess 1, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
