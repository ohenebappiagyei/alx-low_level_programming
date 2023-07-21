#include "main.h"

/**
 * _isdigit - checks for digits between 0-9.
 * @c: the character to print.
 * Return: On success 1 or 0 if unsuccessful.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
