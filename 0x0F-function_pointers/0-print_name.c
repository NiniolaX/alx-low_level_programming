#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to name to be printed
 * @f: Pointer to function that prints a name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
