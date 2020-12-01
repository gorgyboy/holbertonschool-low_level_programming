#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t i, first, second, temp;

	first = 0;
	second = 1;
	for (i = 0; i < 50; i++)
	{
		printf("%lu", first + second);
		if (i < 49)
			printf(", ");
		temp = second;
		second += first;
		first = temp;
	}
	printf("\n");
	return (0);
}
