#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10times
 * Return: 0 (successful)
*/

void print_alphabet_10(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}

		_putchar('\n');
	}
}
