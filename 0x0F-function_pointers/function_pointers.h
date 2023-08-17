#ifndef FUNCTIONPOINTERS_H
#define FUNCTIONPOINTERS_H
#include <stddef.h>
#include <stdlib.h>
/**
 * Author: Dr. Appiagyei
 * This is the header file for the function_pointers header file.
*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNCTIONPOINTERS_H*/
