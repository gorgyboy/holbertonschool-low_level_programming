#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *@s: string to encode.
 *
 *Return: encoded string.
 */

char *leet(char *s)
{
	char lo[5] = {'a', 'e', 'o', 't', 'l'};
	char up[5] = {'A', 'E', 'O', 'T', 'L'};
	int n[5] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; j < 5; j++)
			if (s[i] == lo[j] || s[i] == up[j])
				s[i] = n[j] + '0';
	return (s);
}
