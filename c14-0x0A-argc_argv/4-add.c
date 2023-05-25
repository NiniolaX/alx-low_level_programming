#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: number of arguments received
 * @argv: pointer to array of string of arguments:
 * Return: 0 if success, 1 if symbol is received as argument
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		/* Checks if argument is a number */
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
