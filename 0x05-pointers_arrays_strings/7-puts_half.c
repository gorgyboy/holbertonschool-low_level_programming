#include "holberton.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: string to print
  */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	if (i % 2 == 0)
		i /= 2;
	else
		i = (i / 2) + 1;
	for (; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
