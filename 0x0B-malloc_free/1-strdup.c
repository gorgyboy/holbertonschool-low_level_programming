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

char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		continue;
	i++;
	c = malloc(sizeof(*str) * i);
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = str[j];
	return (c);
}
