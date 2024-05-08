#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: number
 * Return: factorial of given number
 */

int factorial(int n)
{
	/* Base case */
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
