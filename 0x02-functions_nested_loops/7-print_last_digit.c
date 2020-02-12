#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @d: integer number
  *
  * Return: last digit from @d
  */

int print_last_digit(int d)
{
	if (d < 0)
		d = -d % 10;
	else if (d > 0)
		d = d % 10;
	else
		d = 0;
	_putchar(d + '0');
	return (d);
}
