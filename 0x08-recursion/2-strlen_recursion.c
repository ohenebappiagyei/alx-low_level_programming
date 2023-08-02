#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: this is the pointer to the string
 *
 * Return: Return the length
*/
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return (0);
	}

	/* recursive case */
	return (1 + _strlen_recursion(s + 1));
}
