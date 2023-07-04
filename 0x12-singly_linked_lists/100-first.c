#include "lists.h"
#include <stdio.h>

/**
 * before_main - Prints string before text
 * Return: void
 */

void __attribute__((constructor)) str_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
