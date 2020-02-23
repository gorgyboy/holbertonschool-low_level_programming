#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: String to capitalize.
 *
 * Return: captalized string.
 */

char *cap_string(char *s)
{
	int i, j, l;
	char c[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		      '\"', '(', ')', '{', '}'};

	for (l = 0; s[l]; l++)
	for (i = 0; i < l; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (i > 0)
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == c[j] && s[i] >= 'a'
				    && s[i] <= 'z')
					s[i] -= 32;
			}
		}
	}
	return (s);
}
