#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;
/**
 * _getenv - Gets an environment variable
 * @name: Name of environment variable to get
 * Return: Pointer to value of environment variable
 */
char *_getenv(const char *name)
{
	char *value = NULL;
	int i = 0, var_len = strlen(name);

	while (environ[i])
	{
		if (strncmp(name, environ[i], var_len) == 0)
		{
			value = strdup(environ[i] + var_len + 1);
			break;
		}
		i++;
	}
	if (value == NULL)
	{
		return (NULL);
	}

	return (value);
}
int main(void)
{
	char *var = "LOVE";
	char *envVar = _getenv(var);

	if (envVar == NULL)
		printf("%s is not an environment variable\n", var);
	else
		printf("%s\n", envVar);

	return (0);
}
