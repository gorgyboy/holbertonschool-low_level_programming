#include "holberton.h"

/**
  * _abs - computes the absolute value of an integer.
  * @int: integer number
  *
  * Return: Absolute value of @int
  */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
