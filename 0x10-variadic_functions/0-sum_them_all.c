#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of args
 *
 * Return: Sum of all args, 0 if no args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;

	if (n <= 0)
		return (0);

	va_start(ap, n);

	for (i = 0, sum = 0; i < (int)n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
