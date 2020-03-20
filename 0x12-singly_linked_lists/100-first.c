#include <stdio.h>

/**
 * print_first - Prints a message before main function is called
 *
 * Return: Nothing
 */
void __attribute__ ((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
