#include "main.h"

/**
 * Description: print_numbers - Prints the numbers from 0 to 9 using putchar.
 * Return: Void.
 */

void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
