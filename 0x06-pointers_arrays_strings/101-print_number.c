#include "main.h"

/**
 * Description: print_number - Prints an integer.
 * @n: Number to be printed
 * Return: Void
 */

void print_number(int n)
{
	int i;
	int sign = 0;
	unsigned int number;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Checks the sign of number */
		if (s[i] == '-')
		{
			sign = -sign;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			_putchar(sign);
			_putchar(s[i]);
		}
		else if (s[i] >= 


	}
}
