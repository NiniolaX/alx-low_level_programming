#include "main.h"

/**
 * Description: times_table - Prints the 9 times table from 0.
 * Return: Void - returns nothing.
 */

void times_table(void)
{
	int row, col, mul;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mul = col * row;

			if (col < 9 ) 
			{
				if (mul < 10)
				{					
					_putchar(mul + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				} else if (mul >= 10)
				{
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(mul + '0');			
				}
			} else if (col == 9)
			{
				if (mul < 10)
				{
					_putchar(mul + '0');
				} else if (mul >= 10)
				{
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
			}			
		}
		_putchar('\n');
	}
}
