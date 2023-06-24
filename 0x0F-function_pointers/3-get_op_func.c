#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation asked
 *	by user.
 * @s: Operator passed as argument to the program
 * Return: Pointer to the correct function to perform the operation
 */

int (*get_op_func(char *s))(int, int)
{
	/* Create op_t type var for arithmetic operators and their functions */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* Loop through each op element to find correct operator */
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	/* Return NULL if s does not match any of the 5 expected operators */
	return (NULL);
}
