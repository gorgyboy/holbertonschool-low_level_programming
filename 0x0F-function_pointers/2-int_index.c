#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: Integer array to search.
 * @size: @array's size.
 * @cmp: Pointer to function.
 *
 * Return: Index of the first element, otherwise if no mathches
 * or size 0 or less, -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && (*cmp) != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
