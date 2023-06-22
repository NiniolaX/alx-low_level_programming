#include "dog.h"
#include "stdlib.h"

/**
 * _strcpy - Copies a string
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i, j = 0, length = 0;

	/* Calculate length of string */
	while (src[j] != '\0')
	{
		length++;
		j++;
	}

	for (i = 0; i < length + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

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

	/* Allocate memory for name and owner strings */
	newDog->name = malloc(sizeof(name) + 1);
	newDog->owner = malloc(sizeof(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	/* Store strings name and owner in newly allocated memories */
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
