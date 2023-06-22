#include "dog.h"
#include "stdlib.h"

/**
 * _strlen - Calculates length of string
 * @s: Input string
 * Return: Length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strcpy - Copies a string
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i, src_len = _strlen(src);

	for (i = 0; i < src_len; i++)
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
	unsigned int name_len, owner_len;

	/* Allocate memory for newDog */
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}

	/* Calculate length of  name and owner strings */
	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/* Allocate memory for name and owner strings */
	newDog->name = malloc(sizeof(char) * (name_len + 1));
	newDog->owner = malloc(sizeof(char) * (owner_len + 1));
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
