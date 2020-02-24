#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory to fill.
 * @b: byte to set.
 * @n: size of memory to fill.
 *
 * Return: memory filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
