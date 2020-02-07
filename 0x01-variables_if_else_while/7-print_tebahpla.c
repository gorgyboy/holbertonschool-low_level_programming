#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and in reverse,
 * followed by a new line.
 *
 * Return: Return 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
