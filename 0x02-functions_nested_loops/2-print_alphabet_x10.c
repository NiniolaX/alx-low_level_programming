#include "main.h"

/**
 * Description: print_alphabet_x10 - Prints alphabet in lowercase 10 times.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
