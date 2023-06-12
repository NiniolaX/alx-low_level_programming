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
	int i = 1, j, sum = 0, num;

	/* Action if no argument is passed */
	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		while (i < argc)
		{
			/* Loops through each argument char to check for sumbols */
			for (j = 0; argv[i][j] != 0; j++)
			{
				if ((argv[i][j] < 48) || (argv[i][j] > 57))
				{
					printf("Error\n");
					return (1);
				}
			}
			/* Ensures only positive numbers are added */
			num = atoi(argv[i]);
			if (num > 0)
			{
				sum += num;
			}
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
