#include "main.h"

/**
 * Description: print_diagonal - Draws a diagonal line in the terminal.
 * @n: Number of times '\' would be printed.
 * Return: Void.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
