#include <stdio.h>
/**
 * main - print alphabets except q and e
 *
 * Description: using the main function
 * this program prints all alphabets except q and e
 * Return: 0
 */
int main (void)
{
  char c;
  for (c = 'a'; c <= 'z' ; c++)
    {
      if (c == 'q' || c == 'e')
	{
	  c++;
	}
      else
	{
	  putchar (c);
	}
      putchar('\n');
      return (0);
    }
