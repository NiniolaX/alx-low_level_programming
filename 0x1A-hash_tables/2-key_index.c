#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key
 * @size: Size of the array of the hash table
 * Return: Index at which key-pair value should be stored in the array of the
 *	has table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key != NULL && size != 0)
		index = hash_djb2(key) % size;

	return (index);
}
