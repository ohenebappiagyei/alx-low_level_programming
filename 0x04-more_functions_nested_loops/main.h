#ifndef MAIN_H
#define MAIN_H
/** file - main.h
 * Dr. Appiagyei: AUTHOR
 * Description: Header contains all prototypes functions.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
*/

int _isupper(int c);
int _putchar(char c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);

#endif
