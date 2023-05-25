#include <stdio.h>

/**
 * main - Function prints all arguments it receives
 * @argc: Number of arguments received
 * @argv: Pointer to array of argument strings
 * Return: 0 if success:
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
