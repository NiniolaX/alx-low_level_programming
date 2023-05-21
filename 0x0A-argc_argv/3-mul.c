#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments received by program
 * @argv: Pointer to array of string of arguments
 * Return: 0 if success, 1 if it doesn't receive two arguments
 */

int main (int argc, char **argv)
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
