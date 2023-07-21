#include "main.h"

/**
 * print_square - a function that prints a square
 * @size:parameter
 * Return: On success 0
*/

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
		{
			_putchar ('#');
		}
		if (x == size)
		{
			continue;
		}
		_putchar('\n');
		}
	}
	_putchar('\n');
}
