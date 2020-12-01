#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms whose values do
 * not exceed 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t i, first, second, temp, sum;

	sum = 0;
	first = 0;
	second = 1;
	for (i = 1; first <= 4000000 && second <= 4000000; i++)
	{
		if (i % 2 == 0 && first <= 4000000 && second <= 4000000)
			sum += first + second;
		temp = second;
		second += first;
		first = temp;
	}
	printf("%lu\n", sum);
	return (0);
}
