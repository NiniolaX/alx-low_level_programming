#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments received by main
 * @argv: Array of arguments received by main
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
