#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount of
 * 	money
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 */

int num_coins(int money, int denom[])
{
	int i = 0;
	if (money % *denom == 0)
	{
		return (money / *denom);
	}
	else
	{
		while (*denom != '\0')
		{
			if (money % denom[i] == denom[i + 1])
			{
				return (money / *denom + 1);
			}
			i++;
		}
	}
	return (num_coins(money, denom + 1));
}
int main(int argc, char *argv[])
{
	int denom[5] = {25, 10, 5, 2, 1};
	int money, min_number_of_coins;

	/* Checks that number of arguments passed is exactly 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Checks that argument passed is not a negative number */
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (1);
	}
	
	min_number_of_coins = num_coins(money, denom);
	printf("%d\n", min_number_of_coins);
	
	return (0);
}
