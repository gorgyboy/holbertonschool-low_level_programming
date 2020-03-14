#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			if (i < (n - 1) && separator != NULL)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		printf("\n");
	}
	va_end(ap);
}
