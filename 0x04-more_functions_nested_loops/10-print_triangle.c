#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: parameter
 * Return: On success 0
*/

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 2; a <= size; a++)
		{
			for (b = size - a; b > a; b--)
			{
				_putchar(' ');
			}
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			if (a == size)
			{
				continue;
			}	
		_putchar('\n');
		}
	}
	_putchar('\n');
}
