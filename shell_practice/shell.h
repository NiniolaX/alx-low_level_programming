#ifndef SHELL_HEADER
#define SHELL_HEADER

/**
 * struct envvar - Structure for environment variables
 * @name: Name of variable
 * @value: Value of variable
 * @next: Pointer to next variable
 */
typedef struct envvar
{
	char *name;
	char *value;
	struct envvar *next;
} envvar_t;

char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);

#endif
