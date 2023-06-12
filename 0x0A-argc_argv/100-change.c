#include <stdio.h>
#include <stdlib.h>

/**
 * num_coins - Calculates the number of coins to make change for an amount of
 *	money
 * @money: Money to make change for
 * @coins: Available coins to make change
 * Return: Minimum number of coins given for money
 */

int num_coins(int money, int coins[])
{
	int no_of_coins = money / *coins;
	int change_bal = money - (*coins * no_of_coins);

	/* Return no of coins if there's no change left after first division */
	if (money % *coins == 0)
	{
		return (no_of_coins);
	}
	/* Returns no of coins if change balance is zero */
	if (change_bal == 0)
	{
		return (no_of_coins);
	}
	return (no_of_coins + num_coins(change_bal, coins + 1));
}
/**
 * main - Prints the minimum number of coins to make change for an amount of
 *	money
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
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

	min_number_of_coins = num_coins(money, coins);
	printf("%d\n", min_number_of_coins);

	return (0);
}
