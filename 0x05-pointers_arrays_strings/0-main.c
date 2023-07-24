#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	n = 402;

	_putchar('n');
	_putchar('=');
	print_number(n);
	_putchar('\n');

	reset_to_98(&n);

	_putchar('n');
	_putchar('=');
	print_number(n);
	_putchar('\n');

	return (0);
}
