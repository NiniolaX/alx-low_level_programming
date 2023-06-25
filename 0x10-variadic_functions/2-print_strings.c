#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: Separator to be printed between strings
 * @n: Number of strings passed to the function
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	/* Variable to store value from va_arg so it's called once in loop */
	char *str;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && (n - 1 != i))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg_list);
}
