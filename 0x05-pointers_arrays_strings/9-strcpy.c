#include "holberton.h"

/**
  * *_strcpy - copies the string pointed to by src, including the
  * terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: where the string will be copied to.
  * @src: string to copy.
  *
  * Return: pointer to @dest.
  */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (*(src + l) != '\0')
		l++;
	for (i = 0; i <= l; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
