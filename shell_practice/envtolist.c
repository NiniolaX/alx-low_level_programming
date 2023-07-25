#include "shell.h"
#include <string.h>

#include "shell.h"
#include <string.h>

/**
 * add_varnode - Adds a new node(string) to end of linked list
 * @head: Pointer to head node of list
 * @var: Environment variable to be added
 * @val - Balue of environment variable
 */
void add_varnode(envvar_t **head, char *var, char *val)
{
	envvar_t *new, *ptr = *head;

	/* Allocate memory for new string */
	new = malloc(sizeof(envvar_t));
	if (new == NULL)
	{
		printf("shell: add_nodeend: Malloc failed\n");
		return (NULL);
	}
	new->name = strdup(var);
	new->value = strdup(val);
	new->next = NULL;

	/* Handle fresh list */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Hanlde existing list */
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
/**
 * envtolist - Converts a pointer to environment variales to linked list
 * @envstr: Address of environment variables
 * Return: Pointer to head node of list
 */
envvar_t **envtolist(char **environ)
{
	envvar_t *head = NULL;
	int envsize = 0;
	char delim[] = "=", *tok = NULL;
	char *environcp = NULL, *name = NULL, *value = NULL;

	/* Count number of variables in environment string */
	while (environ[envsize])
		envsize++;
	envsize += 1;

	/* Allocate memory for enironcp array */
	environcp = malloc(sizeof(char *) * envsize);
	if (environcp == NULL)
	{
		printf("shell: envtolist: Malloc failed\n");
		return (NULL);
	}
	/* Populate linked list with environ strings */
	for (i = 0; i < envsize; i++)
	{
		environcp[i] = strdup(environ[i]);
		tok = strtok(environcp[i], delim);
		name = strdup(tok);
		while (tok)
		{
			tok = strtok(NULL);
			value = strdup(tok);
		}
		add_varnode(&head, name, value);
		free(name);
		free(value);
	}

	for (i = 0; i < envsize; i++)
		free(environcp[i]);
	free(environcp);

	return (&head);
}
