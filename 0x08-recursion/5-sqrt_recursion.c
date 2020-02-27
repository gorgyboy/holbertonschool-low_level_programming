#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate the square root.
 *
 * Return: natural root square.
 */

int _sqrt_recursion(int n)
{
	int s = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (s * s == n)
			return (s);
		else
			return (_sqrt_recursion(s + 1));
	}
}
