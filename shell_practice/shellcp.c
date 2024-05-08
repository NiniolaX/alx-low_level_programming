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

int _setenv(const char *name, const char *value, int overwrite)
{
	int i = 0, nameLen = _strlen(name);
	envar_t env;

	while (environ[i])
	{
		/* Variable exists */
		if (strncmp(name, environ[i], nameLen) == 0)
		{
			if (overwrite == 0)
				return (0);
			else
				break;
		}
		/* Variable does not exist */
		if (strncmp(name, environ[i], nameLen) != 0 && environ[i + 1] == NULL)
		{
			if (overwrite == 0)
				return (0);
		}
		i++;
	}
	/* Variable was found or variable can now  be created */
	/* Convert environ to linked list */
	envtolist(environ);

	/* Update environment 'name' value with 'value' */

	/* Convert list back to array */

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
