#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* Print current character */
	else
	{
		_putchar(*s);
	}

	/* Recursively print next character */
	_puts_recursion(s + 1);
}
