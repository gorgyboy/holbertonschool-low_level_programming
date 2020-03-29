#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number string
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string @b that is not 0 or 1 or @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, exp;
	int size;

	number = 0;
	exp = 1;
	if (b == NULL)
		return (0);
	for (size = 0; b[size] != '\0'; size++)
	{}
	for (size--; size >= 0; size--)
	{
		if (b[size] == '1' || b[size] == '0')
		{
			number += (exp * (b[size] - 48));
			if (exp == 1)
				exp++;
			else
				exp *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
