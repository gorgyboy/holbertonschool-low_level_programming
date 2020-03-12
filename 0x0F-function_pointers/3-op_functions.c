#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two numbers
 * @a: number
 * @b: number
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of two numbers
 * @a: number
 * @b: number
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product two numbers
 * @a: number
 * @b: number
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: number
 * @b: number
 *
 * Return: Division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Remainder of division of two numbers
 * @a: number
 * @b: number
 *
 * Return: Remainder of division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
