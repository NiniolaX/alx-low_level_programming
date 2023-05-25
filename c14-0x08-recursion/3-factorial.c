#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Number whose factorial is to be found
 * Return: Factorial of given number or -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	/* Base case */
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
