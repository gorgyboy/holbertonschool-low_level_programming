#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @d: integer number
  *
  * Return: last digit from @d
  */

int print_last_digit(int d)
{
	d = d % 10;
	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (d);
}
