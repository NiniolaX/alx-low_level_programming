#include "main.h"

/**
 * Description: _puts - Prints a string.
 * @str: String to be printed.
 * Return: Void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
