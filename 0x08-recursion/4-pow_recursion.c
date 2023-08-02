#include "main.h"

/**
 * _pow_recursion - Calculates the value of x is raised to the power of y.
 * @x: the base value.
 * @y: the exponent value
 *
 * Return: The result of x is raised to the power of y,
 * or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	/* Base case 1: if y is negative, retun -1 to indicate error. */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case 2; if y is 0, the result is 1 (x^0 = 1) */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive case: If y is > than 0, cal power using recursion */
	return (x * _pow_recursion(x, y - 1));
}
