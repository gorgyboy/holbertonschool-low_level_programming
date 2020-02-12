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
		return ((d * -1) % 10);
	else
		return (d % 10);
}
