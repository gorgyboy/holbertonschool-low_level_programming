#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy.
 *
 * Return: returns a pointer.
 */

int slen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;
	return (i);
}

char *_strdup(char *str)
{
	char *c;
	int i, s;

	if (str == NULL)
		return (NULL);
	s = slen(str);
	if (s == 0)
		return (NULL);
	c = malloc(sizeof(*str) * s);
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];
	return (c);
	free(c);
}
