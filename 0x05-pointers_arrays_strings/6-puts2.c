#include "main.h"

/**
 * Description: puts2 - Prints string characters in increments by 2.
 * @str: String to be printed.
 * Return: Void
 */

void puts2(char *str)
{
	int i;
	int length = 0;

	/* Calculates length of string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print string characters */
	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
