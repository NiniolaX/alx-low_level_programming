#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: base
 * @y: power
 * Return: value of x to power y
 */

int _pow_recursion(int x, int y)
{
	/* Base case */
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
