#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

extern char **environ;

int main(void)
{
	/* Initialize variables */
	char *buff = NULL, *delim = " \n", *token = NULL, *buff_cpy = NULL;
	size_t size = 0, i = 0, argc = 0;
	char **argv;
	pid_t pid;
	char exitstr[] = "exit";
	struct stat fileStat;
	char *var = "PATH";
	char *value = getenv(var);

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
			exit(98);
		}

		/* Execute command */
		pid = fork();
		if (pid == -1)
			perror("Fork failed\n");
		if (pid == 0)
		{
			/* Child process */
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
