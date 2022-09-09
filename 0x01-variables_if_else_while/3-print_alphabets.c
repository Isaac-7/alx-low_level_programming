#include <stdio.h>
/**
 * main -printing the alphabets in lower and upper cases
 *
 * Description: using the main function
 * this program prints "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
 * Return: 0
 */
int main (void)
{
  char c;
  for ( c = 'a'; c <= 'z'; c++)
    {
      putchar(c);
	}

    
  for ( c = 'A'; c <= 'Z'; c++)
	{
	  putchar(c);
	}
      putchar('\n'); 
      return (0);
    }
