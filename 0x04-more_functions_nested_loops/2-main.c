#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int result1 = mul(98, 1024);
	int result2 = mul(-402, 4096);

	print_number(result1);
	_putchar('\n');

	print_number(result2);
	_putchar('\n');

	return (0);

}
