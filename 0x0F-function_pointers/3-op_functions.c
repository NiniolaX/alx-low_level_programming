#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts an integer from another
 * @a: First integer
 * @b: Second integer
 * Return: Difference between integer a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Produt of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides one integer by another
 * @a: First integer
 * @b: Second integer
 * Return: Quotient of a and b
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
 * op_mod - Calculates the modulo of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Remainder from division of a by b
 */
int op_mod(int a, int b)
{
	return (a - (op_div(a, b) * b));
}
