#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - Defines a new type struct dog
 * @name: Name of dog
 * @owner: Name of owner
 * @age: Age of dog
 *
 * Descripton: Defines a new type struct dog with elements name, owner and age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
