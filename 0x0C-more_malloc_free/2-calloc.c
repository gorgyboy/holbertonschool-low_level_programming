#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array, using malloc and setting
 * it to zero.
 * @nmemb: array size.
 * @size: memory size.
 *
 * Return: void pointer to allocated array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
