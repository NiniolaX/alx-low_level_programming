#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int idx;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "collision1");
    hash_table_set(ht, "mentioner", "collision2");

    idx = key_index((const unsigned char *)"betty", 1024);
    printf("%s\n", ht->array[idx]->value);

    idx = key_index((const unsigned char *)"hetairas", 1024);
    printf("%s\n", ht->array[idx]->value);

    idx = key_index((const unsigned char *)"mentioner", 1024);
    printf("%s\n", ht->array[idx]->value);
    return (EXIT_SUCCESS);
}
