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
	op_t op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op.f = get_op_func(argv[2]);

	if (op.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op.f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
