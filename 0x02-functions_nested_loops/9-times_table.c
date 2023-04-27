#include "main.h"

/**
 * Description: times_table - Prints the 9 times table from 0.
 * Return: Void - returns nothing.
 */

void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int mul = row * col;
			if (mul >= 10)
			{
				_putchar(mul / 10 + '0');
			}
			_putchar(mul % 10 + '0');
			_putchar(',');
			_putchar(' ');

		}
		_putchar('\n');
	}
}
