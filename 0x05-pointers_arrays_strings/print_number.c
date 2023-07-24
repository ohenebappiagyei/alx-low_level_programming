#include "main.h"

/** 
 * Main - prints integer using _putchar
 *
 * Return: Always returns 0.
*/

void print_number(int n)
{
	/* handle negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* handle single-digit numbers*/
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}

	/* recursively print the digits*/
	print_number(n / 10);
	_putchar(n % 10 + '0');
}
