#include "main.h"

/**
 * Description: print_most_numbers - Prints numbers from 0 to 9 except 2 and 4.
 * Return: Void.
 */

void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
