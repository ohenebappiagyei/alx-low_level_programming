#ifndef FUNCTIONPOINTERS_H
#define FUNCTIONPOINTERS_H
#include <stddef.h>
/**
 * Author: Dr. Appiagyei
 * This is the header file for the function_pointers header file.
*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /*FUNCTIONPOINTERS_H*/
