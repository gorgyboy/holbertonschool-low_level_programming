#include "holberton.h"

/**
 * *_strcat - concatenates two strings.
 * @src: Source string.
 * @dest: Destination string.
 *
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	for (j = 0; *(src + j) != '\0'; j++)
		*(dest + (i + j)) = *(src + j);
	*(dest + (i + j + 1)) = '\0';
	return (dest);
}
