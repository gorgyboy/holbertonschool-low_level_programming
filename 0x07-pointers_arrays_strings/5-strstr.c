#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to look in.
 * @needle: string to look for.
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j];
		     j++)
			continue;
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
