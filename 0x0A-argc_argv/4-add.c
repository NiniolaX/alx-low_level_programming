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
	int i = 1, sum = 0, num;

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
			num = atoi(argv[i]);
			if ((*argv[i] < 48 && *argv[i] != 45) || (*argv[i] > 57))
			{
				printf("Error\n");
				return (1);
			}
			/* Adds only positive numbers */
			else if (num > 0)
			{
				sum += num;
			}
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
