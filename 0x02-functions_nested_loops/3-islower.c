#include "holberton.h"

/**
  * _islower - checks for lowercase character.
  * @c: integer character
  *
  * Return: 1 if lower case, otherwise 0.
  */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
