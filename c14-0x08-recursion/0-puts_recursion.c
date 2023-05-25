#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline character.
 * @s: String to be printed.
 * Return: Void.
 */

void _puts_recursion(char *s)
{
	/* Define base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print current character */
	_putchar(*s);

	/* Recursively print the next character */
	_puts_recursion(s + 1);
}
