#include "holberon.h"

/**
  * print_triangle - prints a triangle, followed by a new line.
  * @size: size of the triangle
  */

void print_triangle(int size)
{
	int i, j, s;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (s = (size - 1); s > i; s--)
				_putchar(' ');
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
}
