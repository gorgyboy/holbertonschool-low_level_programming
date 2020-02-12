#include "holberton.h"

/**
  * print_alphabet_10x - prints the alphabet 10 times, in lowercase,
  * followed by a new line.
  *
  */

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
