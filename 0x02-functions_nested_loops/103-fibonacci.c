#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms whose values do
 * not exceed 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t first, second, temp, sum;

	sum = 0;
	first = 0;
	second = 1;
	/* 4613732 */
	while (second <= 4000000)
	{
		temp = second;
		second += first;
		first = temp;
		if (second % 2 == 0 && second <= 4000000)
			sum += second;
	}
	printf("%lu\n", sum);
	return (0);
}
