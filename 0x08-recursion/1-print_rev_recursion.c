#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: pointer to string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		return;
	}
	else
	{
		/* Initiate recursion to print next character */
		_print_rev_recursion(s + 1);
	}

	/* Print current character */
	_putchar(*s);
}
