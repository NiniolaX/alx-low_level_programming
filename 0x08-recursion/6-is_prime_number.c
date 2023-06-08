#include "main.h"

/**
 * _prime_helper - Checks if integer is prime number
 * @n: Integer to be checkes
 * @divisor: Divisor
 * Return: 0 if integer is a prime number, 1 if otherwise
 */
int _prime_helper(int n, int divisor)
{
	/* Base cases */
	/* When integer is not a prime number */
	if (n % divisor == 0 && n != divisor && divisor != 1)
	{
		return (0);
	}
	else if (n % divisor == 0 && n / divisor == 1)
	{
		return (1);
	}
	return (_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an input integer is a prime number
 * @n: Integer to be checked
 * Return: 1 if integer is prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	int divisor = 1;

	/* Base cases */
	if (n < 0 || n == 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (_prime_helper(n, divisor));
	}
}
