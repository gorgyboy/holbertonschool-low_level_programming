#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct op - Struct op
 * @fmt: The formatting operator
 * @f: The function associated
 */
typedef struct print_format {
	char *fmt;
	int (*f)(va_list);
} p_fmt;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
