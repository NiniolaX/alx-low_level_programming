#include "main.h"

/**
 * Description: print_sign - Prints the sign of number.
 * @n: Variable to be checked.
 * Return: Returns 1 for positive number, zero for 0 and -1 for negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	{
		_putchar(45);
		return (-1);
	}
}
