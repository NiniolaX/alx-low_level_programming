#include "main.h"

/**
 * Description: puts_half - Prints the second half of a string.
 * @str: String to be printed.
 * Return: Void.
 */

void puts_half(char *str)
{
	int i, n;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	n = (length - 1) / 2;
	for (i = n + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
