#include "main.h"

/**
 * Description: print_last_digit - Prints the last digit of a number.
 * @c: number to be checked.
 * Return: 0 always.
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (c >= 0)
	{
		_putchar('0' + last_digit);
	} else if (c < 0)
	{
		last_digit = last_digit * -1;
		_putchar('0' + last_digit);
	}
	return (last_digit);
}
