#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse using recursion.
 * @s: String to be reversed.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* Declare base case */
	if (*s == '\0')
	{
		return;
	}

	/* Initiate recursion */
	_print_rev_recursion(s + 1);

	/* Print character */
	_putchar(*s);
}
