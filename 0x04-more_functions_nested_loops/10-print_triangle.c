#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @sizw: parameter
 * Return: ON success 0
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		return;

	for (i = 1; i <= size; i ++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
