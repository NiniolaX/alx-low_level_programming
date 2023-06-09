#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed to main
 * @argv: Array of arguments passed to main
 * Return: 0 if success, 1 if error.
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
