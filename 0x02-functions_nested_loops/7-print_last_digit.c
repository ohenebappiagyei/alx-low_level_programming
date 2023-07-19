#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @d: argument
 * Return: x
*/

int print_last_digit(int d)
{
	int x;

	x = d %10;

	if (d < 0)
			x = -x;
	_putchar(x + '0');
	return(x);
}
