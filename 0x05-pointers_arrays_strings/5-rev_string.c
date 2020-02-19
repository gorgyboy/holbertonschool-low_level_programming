#include "holberton.h"

/**
  * rev_string - reversesa string.
  * @s: string
  */

void rev_string(char *s)
{
	int l, i;
	char c;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	for (i = 0; i < (l / 2); i++)
	{
		c = *(s + i);
		*(s + i) = *(s + ((l - 1) - i));
		*(s + ((l - 1) - i)) = c;
	}
}
