#include <stdio.h>

/**
 * main - h
 * @argc: h
 * @argv: j
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
