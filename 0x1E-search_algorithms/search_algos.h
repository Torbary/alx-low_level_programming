#ifndef SEARCH_ALGORITHM
#define SEARCH_ALGORITHM

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
