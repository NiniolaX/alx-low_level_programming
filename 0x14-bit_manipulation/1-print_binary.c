#include "main.h"

/**
 * print_binary_helper - Converts number to binary and prints it in reversr
 * @n: Number to be converted to binary
 * Return: void
 */
void print_binary_helper(unsigned long int n)
{
	char c;

	/* Base case */
	if (n == 0)
	{
		return;
	}
	if ((n & 1) == 0)
		c = '0';
	else if ((n & 1) == 1)
		c = '1';
	print_binary_helper(n >> 1);
	_putchar(c);
}

/**
 * print_binary - Converts number to binary
 * @n: Number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary_helper(n);
}
