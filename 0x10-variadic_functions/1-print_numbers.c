#include "variadic_functions.h"
#include "stdio.h"

/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between each number
 * @n: Number of integers passed to function
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;

	if (n == 0)
	{
		return;
	}
	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(arg_list);
}
