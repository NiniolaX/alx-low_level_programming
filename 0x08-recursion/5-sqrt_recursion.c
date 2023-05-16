#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a given number.
 * sqrt_helper - Finds the guess that is equal to the root of the number,
 * @n: Number whose square root is to be calculated.
 * @guess: Initial guess root.
 * Return: Natural square root of number or -1 for number without natural sqrt.
 */

int sqrt_helper(int n, long guess)
{
	/* When natural root is found */
	if (n / guess == guess)
	{
		return (guess);
	}
	/* When number is not a perfect square */
	else if (guess * guess != n && (n / guess == guess))
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
int _sqrt_recursion(int n)
{
	long guess = 1;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess));
}
