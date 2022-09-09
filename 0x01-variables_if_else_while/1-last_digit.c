#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main (void)
{
  int n;
  int a;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  n[-1] = a;

  if (a > 5)
    {
      printf("Last digit of %i is %i and is greater than 5", n, a);
	}
  else if (a ==0)
	 {
	   printf("Last digit of %i is %i and is 0", n, a);
	 }
  else
    {
      printf("Last digit of %i is %i and is less than 6 and not 0", n, a);
    }
     
  return (0);
}
