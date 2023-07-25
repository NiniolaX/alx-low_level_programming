#include <string.h>
#include "shell.h"

extern char **environ;

/**
 * _setenv - Sets a new value for an environment variable
 */
int _setenv(const char *var, const char *value, int overwrite)
{
	int varLen = strlen(var), valLen = strlen(value), i, j;
	int envstrLen = varLen + valLen + 2;
	char *newVar = NULL, **environNew;

	for (i = 0; environ[i] != NULL; i++)
	{
		/* If environment variable exists */
		if (strncmp(var, environ[i], varLen) == 0)
		{
			if (overwrite == 0)
				return (0);
			free(environ[i]);
			environ[i] = malloc(sizeof(char) * envstrLen);
			if (environ[i] == NULL)
			{
				printf("hsh: _setenv: Memory allocation error\n");
				return (-1);
			}
			strcpy(environ[i], var);
			strcat(environ[i], "=");
			strcat(environ[i], value);
			return (0);
		}

		/* If environment variable does not exist */
		if ((environ[i + 1] == NULL) && (strncmp(var, environ[i], varLen) != 0))
		{
			if (overwrite == 0)
				return (0);
			/* Build new environment variable array */
			environNew = malloc(sizeof(char *) * (i + 2));
			if (environNew == NULL)
			{
				printf("shell: _setenv: Memory allocation error\n");
				return (-1);
			}
			/* Copy old environment variables into new env array */
			for (j = 0; environ[j] != NULL; j++)
			{
				environNew[j] = environ[j];
			}
			/* Construct new environment variable string */
			newVar = malloc(sizeof(char) * envstrLen);
			if (newVar == NULL)
			{
				printf("shell: _setenv: Memory allocation error\n");
				return (-1);
			}
			strcpy(newVar, var);
			strcat(newVar, "=");
			strcat(newVar, value);
			environNew[j++] = newVar;
			environNew[j++] = NULL;

			free(environ); /* Use free_args */
			environ = environNew;
			return (0);
		}
	}
}
