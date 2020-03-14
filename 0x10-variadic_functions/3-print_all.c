#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

int p_char(va_list ap);
int p_int(va_list ap);
int p_float(va_list ap);
int p_string(va_list ap);

/**
 * print_all - Prints anything
 * @format: Format of argument to print
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list l_args;
	p_fmt fmt[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	i = 0;
	va_start(l_args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && *fmt[j].fmt != format[i])
			j++;
		if (j < 4)
		{
			fmt[j].f(l_args);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(l_args);
}

/**
 * p_char - Prints a char
 * @ap: Argument to print
 *
 * Return: Always 0
 */
int p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
	return (0);
}

/**
 * p_int - Prints an int
 * @ap: Argument to print
 *
 * Return: Always 0
 */
int p_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
	return (0);
}

/**
 * p_float - Prints a float
 * @ap: Argument to print
 *
 * Return: Always 0
 */
int p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
	return (0);
}

/**
 * p_string - Prints a string
 * @ap: Argument to print
 *
 * Return: Always 0
 */
int p_string(va_list ap)
{
	char *ptr;

	ptr = va_arg(ap, char *);

	if (ptr == NULL)
	{
		printf("%p", ptr);
		return (0);
	}
	printf("%s", ptr);
	return (0);
}
