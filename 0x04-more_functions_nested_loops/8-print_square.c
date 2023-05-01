#include "main.h"

/**
 * Description: print_square - Prints a square.
 * @size: Size of square to be printed.
 * Return: Void.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
