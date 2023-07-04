#ifndef LISTS_HEADER
#define LISTS_HEADER

#include <stddef.h>
#include <stdlib.h>
#include <strings.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to next node
 *
 * Description: singly linked lit node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
unsigned int _strlen(const char *s);

#endif
