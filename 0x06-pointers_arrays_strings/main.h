#ifndef MAIN_H
#define MAIN_H

/**
 * main - The file for all the prototypes for the pointers,
 * arrays, and strings
 * Author: Dr. Appiagyei
 * For ALX
 * Return: nothing
*/

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
