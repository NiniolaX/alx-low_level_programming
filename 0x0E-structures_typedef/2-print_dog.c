#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog to be printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
