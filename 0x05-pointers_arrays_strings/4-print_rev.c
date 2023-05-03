#include "main.h"

/**
 * Description: print_rev - Prints a string in reverse.
 * @s: String to be printed.
 * Return: Void.
 */

void print_rev(char *s)
{
	int i;

	/* Calculate the length of the string */
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
