#include <stdio.h>
#include "holberton.h"

/**
  * print_to_98 - prints all natural numbers from n to 98, followed by
  * a new line.
  * @n: integer number
  */

void print_to_98(int n)
{
	n = n;
	if (n < 98)
		for (n; n < 98; n++)
			printf("%d, ", n);
	else if (n > 98)
		for (n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
