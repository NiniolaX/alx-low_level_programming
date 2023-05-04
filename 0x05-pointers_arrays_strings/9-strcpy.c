#include "main.h"

/**
 * Description: _strcpy - Copies a string including null terminator.
 * @dest: String element destination.
 * @src: String element source.
 * Return: Pointer to 'dest'.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	/* Calculate the length of the source string */
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	/* Copy characters in string src to dest */
	for (i = 0; i < length + 1; i++)
		/* length + 1 is to print null terminator */
	{
		dest[i] = src[i];
	}

	return (dest);
}
