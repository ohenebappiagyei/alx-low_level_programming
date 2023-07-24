#include "main.h"
/**
 * main - swaps the value of two integers
 *
 * Return: Always 0.
*/
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	_putchar('a');
	_putchar('=');
	print_number(a);
	_putchar(',');
	_putchar(' ');
	_putchar('b');
	_putchar('=');
	print_number(b);
	_putchar('\n');
	
	swap_int(&a, &b);

	_putchar('a');
	_putchar('=');
	print_number(a);
	_putchar(',');
	_putchar(' ');
	_putchar('b');
	_putchar(' ');
	print_number(b);
	_putchar('\n');

	return (0);
}
