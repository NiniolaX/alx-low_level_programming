#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: number of arguments passed into program
 * @argv: Pointer to array of strings passed into program
 * Return: 0 if success.
 */

int main(int argc, __attribute__ ((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
