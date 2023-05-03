#include "main.h"

/**
 * Description: print_rev - Prints a string in reverse.
 * @s: String to be printed.
 * Return: Void.
 */

void print_rev(char *s)
{
	int i = 0;
	char s[i] = '\0';
	
	while (s[i] < '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
