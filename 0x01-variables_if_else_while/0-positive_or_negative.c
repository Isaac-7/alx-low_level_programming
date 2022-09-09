#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - checks if the number is positive or zero or negative
*
* Description: using the main function 
* The program prints " ...is zero" or " is positive" or "is negative"
* Return: 0
*/
int main(void)
{
int n;

srand (time(0));
n = rand() - RAND_MAX / 2;
    
if (n > 0)
{
  printf("%i is positive\n", n);
}
else if (n==0)
{
  printf("%i is zero\n", n);
}
else
{
  printf("%i is negative\n", n);
}
 return (0);
}
   
