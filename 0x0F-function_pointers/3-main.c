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
	op_t op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", op.f(num1, num2));

	return (0);
}
