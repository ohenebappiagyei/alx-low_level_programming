#include "function_pointers.h"
/**
 * print_name - Print a name using a specified printing function.
 * @name: Pointer to the name to be printed.
 * @f: Function pointer to the printing function.
 * Return: 0;
*/
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
