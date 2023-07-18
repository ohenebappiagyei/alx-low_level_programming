#include "main.h"

/**
 * print_alphabet - print all alphabets
 * @void: Print alphabets
*/

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}

	_putchar('\n');
}
