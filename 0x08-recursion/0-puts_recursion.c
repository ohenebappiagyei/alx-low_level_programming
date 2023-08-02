#include "main.h"
/**
 * puts_recursion - this function prints recursively
 * @s: this is the pointer to the string
 *
 * Return: returns s
*/
void _puts_recursion(char *s)
{
	/* print the string */
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}

	/* this is the base case */
	else
		_putchar('\n');
}
