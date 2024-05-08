#include <stdio.h>

/**
 * main - Prints its name
 * @argc: Number of command line arguments passed
 * @argv: Array containing program command line arguments
 * Return: 0 if success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
