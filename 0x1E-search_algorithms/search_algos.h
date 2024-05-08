#ifndef SEARCH_ALGOS_HEADER
#define SEARCH_ALGOS_HEADER

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);

#endif
