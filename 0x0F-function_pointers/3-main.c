#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs simple operations
 * @argc: Aumber of args
 * @argv: Args array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	/* char *op; */
	op_t operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* op = argv[2]; */
	if (sizeof(*argv[2] > 1))
	{
		printf("Error\n");
		exit(99);
	}

	operation.f = get_op_func(argv[2]);

	if (operation.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation.f(num1, num2));

	return (0);
}
