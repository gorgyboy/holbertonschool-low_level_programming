#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: Name to print.
 * @f: Pointer to function to print name.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && (*f) != NULL)
		(*f)(name);
}
