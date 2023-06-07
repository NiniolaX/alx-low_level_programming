#include "main.h"

/**
 * _sqrt_helper - finds guess which equals the natural square root of number
 * @n: number
 * @guess: guess of natural square root
 * Return: guess whic equals natural square root of number
 */
int _sqrt_helper(int n, int guess)
{
	/* When natural root is found */
	if (guess * guess == n)
	{
		return (guess);
	}
	/* When n is not a perfect square */
	else if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - calculates the square root of number
 * @n: number whose square root is to be calculated
 * Return: natural square root of number or -1 if error
 */
int _sqrt_recursion(int n)
{
	int guess = 1;

	/* Base cases */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_sqrt_helper(n, guess));
}
