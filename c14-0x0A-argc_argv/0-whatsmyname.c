#include <stdio.h>

/**
 * main - Prints its (program) name.
 * @argc: Number of arguments given to main
 * @argv: Pointer to string of arguments
 * Return: 0 if succes.
 */

int main(__attribute__ ((unused))int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
