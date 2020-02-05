#include <stdio.h>

/**
  * main - Prints the size of various types on the computer it is
  * compiled and run on
  *
  * Return: Returns 0
  */
int main(void)
{
	char size_c;
	int size_i;
	long int size_li;
	long long int size_lli;
	float size_f;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(size_c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(size_i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(size_li));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(size_lli));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(size_f));
	return (0);
}
