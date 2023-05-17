#include "main.h"

/**
 * prime_helper - Finds factors of n and checks if n is prime.
 * @n: Number whose factors are to be found.
 * @divisor: Number to divide n with
 * Return: 1 if n is prime and 0 if otherwise.
 */
int prime_helper(int n, int divisor)
{
	/* When a factor of n other than n is found */
	if (n % divisor == 0 && divisor != n)
	{
		return (0);
	}
	/* When n is found to be prime */
	else if (n % divisor == 0 && divisor == n)
	{
		return (1);
	}
	else
	{
		return (prime_helper(n, divisor + 1));
	}
}

/**
 * is_prime_number - Checks if an input number is a prime number.
 * @n: number to be checked.
 * Return: 1 if number is prime, 0 if otherwise.
 */
int is_prime_number(int n)
{
	/* Initialize a number to be used to divide n to find n's factors */
	int divisor = 2;

	if (n == 1 || n < 1)
	{
		return (0);
	}
	return (prime_helper(n, divisor));

}
