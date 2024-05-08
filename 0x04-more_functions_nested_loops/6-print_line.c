#include "main.h"

/**
 * Description: print_line - Prints '_' n number of times.
 * @n: Number of times '_' is to be printed.
 * Return: Void.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
