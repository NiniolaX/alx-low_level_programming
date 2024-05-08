#include <stdio.h>

/**
 * main - Program prints number of arguments passed to it
 * @argc: number of arguments passed to main
 * @argv: array of arguments passed to main
 * Return: 0 if succes
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
