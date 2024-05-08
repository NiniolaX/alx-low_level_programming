#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Name of dog to initialize
 * @age: Age of dog to initialize
 * @owner: Owner of dog to initialize
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Allocate memory for init_dog */
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}

	/* Now that mem alloc is complete, initialize variable d */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
