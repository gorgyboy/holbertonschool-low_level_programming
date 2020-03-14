#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			ptr = va_arg(ap, char *);
			if (ptr != NULL)
			{
				if (i < (n - 1) && separator != NULL)
					printf("%s%s", ptr, separator);
				else
					printf("%s", ptr);
			}
			else
			{
				if (i < (n - 1) && separator != NULL)
					printf("%p%s", ptr, separator);
				else
					printf("%p", ptr);
			}
		}
		printf("\n");
	}
	va_end(ap);
}
