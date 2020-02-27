#inlude "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate factorial.
 *
 * Return: factorial of @n, if @n lower than 0, returns -1.
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
