#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @array: Integer array.
 * @size: Array's size.
 * @action: Function pointer.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && (*action) != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
