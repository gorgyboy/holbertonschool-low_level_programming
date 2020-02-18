#include "holberton.h"

/**
  * swap_init - swaps the values of two integers.
  * @a: integer number
  * @b: integer number
  */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
