#include "holberton.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line.
  * @s: string
  */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i--;
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
