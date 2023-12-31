#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - Print a name using a specified printing function.
 * @name: Pointer to the name to be printed.
 * @f: Function pointer to the printing function.
 * This function prints the given name using the provided printing function.
*/
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	(*f)(name);
}
