#include "main.h"

unsigned int _strspn (char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
		}
		if (*s != accept[i])
		{
			return (bytes);
		}
		s++;
	}
	return (bytes);
}
