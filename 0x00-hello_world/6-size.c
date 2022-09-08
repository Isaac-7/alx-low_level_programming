#include <stdio.h>

/**
* main - print the string in the print function
*
*Description: using the main function
*this program prints the various types
*Return: 0
*/
int main(void)
{
         char c;
         int i;
	 long li;
	 long long lli;
	 float f;

	 printf("Size of a char: %id bytes(s)\n", sizeof(c));
	 printf("Size of an int: %id byte(s)\n", sizeof(i));
	 printf("Size of a long int: %id byte(s)\n", sizeof(li));
         printf("Size of a long long int: %id byte(s)\n", sizeof(lli));
         printf("Size of a float: %id byte(s)\n", sizeof(f));
	 return (0);
}
