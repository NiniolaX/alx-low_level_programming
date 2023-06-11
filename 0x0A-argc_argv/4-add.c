#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed to main
 * @argv: Array of arguments passed to main
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	/* Action if no argument is passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		while (i < argc)
		{
			/* Checks that argument is a number */
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
