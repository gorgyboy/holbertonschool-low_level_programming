#include <stdio.h>

/**
 * main - Print all the numbers from 00 to 99.
 *
 * Return: Return 0
 */

int main(void)
{
	int i, j, k, l, t_i, t_j;

	t_i = 1;
	t_j = 1;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			for (k = i; k < 10; k++)
			{
				if (t_i == i && t_j == j)
					l = 0;
				else
				{
					l = j + 1;
					t_i = i;
					t_j = j;
				}
				for (; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i != 9 || j != 8 ||
					    k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
