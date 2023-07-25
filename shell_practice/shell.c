#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "shell.h"

extern char **environ;

char *_getenv(const char *name)
{
        int i = 0, nameLen = strlen(name);

        while (environ[i])
        {
                if (strncmp(name, environ[i], nameLen) == 0)
                {
                        return (environ[i] + nameLen + 1);
                }
                i++;
        }

        return (NULL);
}


/**
 * _setenv - Sets a new value for an environment variable
 * @var: Variable name
 * @value: Variable value
 * @overwrite: Integer flag ot overwrite or not
 * Return: 0 on success, -1 on fail
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

int main(void)
{
	/* Initialize variables */
	char *buff = NULL, *delim = " \n", *token = NULL, *buff_cpy = NULL;
	size_t size = 0, i = 0, argc = 0;
	char **argv;
	pid_t pid;
	char exitstr[] = "exit";
	struct stat fileStat;
	char var[] = "PATH";
	char *value = _getenv(var);
	int env;

	while (1)
	{
		argc = 0;
		i = 0;
		printf("#cisfun$ ");

		/* Read user input or command line */
		if (getline(&buff, &size, stdin) == -1)
		{
			printf("Error getline\n");
			return (-1);
		}
		buff_cpy = strdup(buff);

		/* Tokenize string */
		token = strtok(buff, delim);
			/* Get value of argc */
		while (token != NULL)
		{
			token = strtok(NULL, delim);
			argc++;
		}
			/* Store each token in argv */
		argv = malloc(sizeof(char *) * argc + 1);
		token = strtok(buff_cpy, delim);
		while (token != NULL)
		{
			argv[i] = strdup(token);
			token = strtok(NULL, delim);
			i++;
		}
		argv[argc] = NULL;

		/* Check if argument is exit */
		if ((strcmp(argv[0], exitstr)) == 0)
		{
			if (buff != NULL || argv != NULL)
			{
				for (i = 0; i < argc; i++)
					free(argv[i]);
				free(argv);
				free(buff);
				buff = NULL;
				size = 0;
			}
			free(buff_cpy);
			buff_cpy = NULL;
			break;
		}

		/* Execute command */
		pid = fork();
		if (pid == -1)
			perror("Fork failed\n");
		if (pid == 0)
		{
			_setenv("PWD", "/shell", 1);
			printf("%s\n", getenv("PWD"));
			/* Child process */
			if (stat(argv[0], &fileStat) == -1)
				printf("command: %s not found\n", argv[0]);
			else
				execve(argv[0], argv, environ);
		}
		else
		{
			/* Parent process */
			wait(NULL);
			for (i = 0; i < argc; i++)
				free(argv[i]);
			free(argv);
			argv = NULL;
			buff = NULL;
			size = 0;
			free(buff_cpy);
			buff_cpy = NULL;
		}
	}

	return (0);
}
