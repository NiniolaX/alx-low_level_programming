#include "main.h"

/**
 * Description: times_table - Prints times table from 0 to 9.
 * Return: Void.
 */

void times_table(void)
{
	int row, col, mul;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mul = col * row;

			/* To print double-digit results properly with putchar */
			if (mul < 10)
			{
				_putchar(mul + '0');

				/* To not print comma on last number on each line */
				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			} else if (mul >= 10)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');

				/* To not print comma on last num on each line */
				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
