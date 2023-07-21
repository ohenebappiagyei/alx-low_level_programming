#include "main.h"

/**
 * print_line - Draws a sraight line in the terminal
 * @ n: The number of times the character
 * should be printed
*/

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
