#include "holberton.h"

/**
 * *_strncat - concatenates two strings.
 * @src: Source string.
 * @dest: Destination string.
 * @n: byte limit.
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	for (j = 0; j < n && *(src + j) != '\0'; j++)
		*(dest + (i + j)) = *(src + j);
	*(dest + (i + j)) = '\0';
	return (dest);
}
