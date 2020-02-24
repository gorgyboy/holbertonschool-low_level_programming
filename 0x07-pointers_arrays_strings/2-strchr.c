#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: string where to look for character.
 * @c: character to look for.
 *
 * Return: pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i <= l; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return (0);
}
