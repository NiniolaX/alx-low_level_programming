#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: Pointer to new dog or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Initialize pointer to variable representing new dog */
	dog_t *newDog;

	/* Allocate memory for newDog */
	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = name;
	newDog->owner = owner;
	newDog->age = age;

	return (newDog);
}
