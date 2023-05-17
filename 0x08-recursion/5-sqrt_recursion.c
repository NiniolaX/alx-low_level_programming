#include "main.h"

/**
 * sqrt_helper - Finds the guess which equals natural square root of nuumber.
 * @n: Number whose square root is to be found.
 * @guess: Guess of square root of number.
 * Return: Guess which is natural square root of number.
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

/**
 * _sqrt_recursion- Calculates the natural square root of a given number.
 * @n: Number whose square root is to be calculated.
 * Return: Natural square root of number or -1 for number without natural sqrt.
 */
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
