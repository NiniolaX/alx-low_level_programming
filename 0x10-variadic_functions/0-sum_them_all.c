#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all of its parameters
 * @n: Parameter count
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_list;

	va_start(arg_list, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}

	/* Clean up argument list */
	va_end(arg_list);

	return (sum);
}
