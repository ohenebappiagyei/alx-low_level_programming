#include "main.h"

/**
 * factorial - This function returns the factorial of a given number.
 * @n: The given number.
 *
 * Return: -1 if n is negative, 1 if n is 0 or 1,
 * and the factorial of n otherwise.
*/
int factorial(int n)
{
	/* base case 1 : if n is negative */
	if (n < 0)
	{
		return (-1);
	}

	/* base case 2: if n is 0 or 1, the factorial is 1 */
	if (n == 0 || n == 1)
	{
		return (1);
	}

	/* recursive case */
	return (n * factorial(n - 1));
}
