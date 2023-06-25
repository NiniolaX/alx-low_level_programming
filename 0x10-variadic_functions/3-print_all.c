#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to function
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	va_list arg_list;
	int i = 0;
	/* Holds string argument passed to function */
	char *str;

	va_start(arg_list, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg_list, int));
					break;

				case 'i':
					printf("%s%d", separator, va_arg(arg_list, int));
					break;

				case 'f':
					printf("%s%f", separator, va_arg(arg_list, double));
					break;

				case 's':
					str = va_arg(arg_list, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;

				default:
					break;
			}
			i++;
			separator = ", ";
		}
	}
	printf("\n");
	va_end(arg_list);
}
