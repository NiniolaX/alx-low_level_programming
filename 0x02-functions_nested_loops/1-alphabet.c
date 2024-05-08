#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
