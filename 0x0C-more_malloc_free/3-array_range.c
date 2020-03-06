#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Description: the array created contains all the values from min (included)
 * to max (included), ordered from min to max.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc (sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		ptr[i] = min + i;

	return (ptr);
}
