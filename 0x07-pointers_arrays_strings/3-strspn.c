#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to look in.
 * @accept: bytes to look for.
 *
 * Return: Returns the number of bytes in the initial segment of @s
 * which consist only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
			continue;
		if (s[i] != accept[j])
			return (i);
	}
	return (0);
}
