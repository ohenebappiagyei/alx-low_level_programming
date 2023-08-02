#include "main.h"
/**
 * _print_rev_recursion - this function prints recursively in reverse
 * @s: this is the pointer to the string
 *
 * Return: returns s
*/
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return;
	}

	/* print the string */
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
