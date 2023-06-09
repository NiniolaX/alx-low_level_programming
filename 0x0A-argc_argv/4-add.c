#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed to main
 * @argv: Array of arguments passed to main
 * Return: 0 if succes
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
