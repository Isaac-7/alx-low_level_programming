#include "main.c"
/**
 * print_alphabet_x10 - prints alphabet ten time
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	for (char i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z', c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
