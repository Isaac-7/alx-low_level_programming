#include <stdio.h>
/**
 * main - this program print all possible combos in ascending
 *
 *Description: using the main function
 *this program prints --
 * Return: 0
 */
int main (void)
{
  int i;
  int j;
  for (i = 0; i <=9; i++)
    {
      for (j = i+1 ; j <=9; j++)
	{
	  putchar(i);
	    putchar(j);
	    putchar(',');
	    putchar(' ');
	}
    }
  putchar ('\n');
  return (0);
}
