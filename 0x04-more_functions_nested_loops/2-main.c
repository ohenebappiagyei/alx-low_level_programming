#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
	int result1 = mul(98, 1024);
	int result2 = mul(-402, 4096);

	_putchar(result1 + '0');
	_putchar('\n');

	_putchar(result2 + '0');
	_putchar('\n');

	return (0);
}
