#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length - return the length of the string.
 * @s: string.
 *
 * Return: string's length.
 */

unsigned int length(char *s)
{
	unsigned int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of charaters to concatenate.
 *
 * Return: pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l_s1, l_s2, i;
	char *ptr;

	l_s1 = length(s1);
	l_s2 = length(s2);

	if (n < l_s2)
		l_s2 = n;

	if (l_s1 == l_s2 == 0)
	{
		ptr = "";
		return (ptr);
	}

	ptr = malloc(sizeof(*s1) * (l_s1 + l_s2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l_s1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < l_s2; i++)
		ptr[s_l1 + i] = s2[i];

	ptr[s_l1 + l_s2 + 1] = '\0';

	return (ptr);
}
