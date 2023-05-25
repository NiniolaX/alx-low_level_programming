#include "main.h"

/**
 * _pow_recursion - Finds the power of a number x to a number y.
 * @x: base number
 * @y: exponent or power
 * Return: value of x raised to power of y or -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	/* Base case */
	if (y == 0)
	{
		return (1);
	}
	/* Condition for powers lower than 0 */
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
