#ifndef MAIN_H
#define MAIN_H
#include <stdbool.h>
/**
 * This is the header file for all the prototypes for this task
 * Author: Dr. Appiagyei
 * DATE: 10/08/2023.
*/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
bool is_valid_number(const char *str);
void print_number(int num);


#endif
