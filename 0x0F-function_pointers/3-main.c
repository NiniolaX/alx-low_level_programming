#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs simple mathematical operations
 * @argc: Number of arguments received
 * @argv: Pointer to string of arguments received
 * Return: Result of operation
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ptr)(int, int);

	/* Exit program if wrong number of arguments is passed */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Get the correct function to perform operation using get_op_func() */
	ptr = get_op_func(argv[2]);
	/* Exit program if get_op_func returns NULL(i.e operator is invalid) */
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/*Print the result of operation */
	printf("%d\n", ptr(num1, num2));
	return (0);
}
