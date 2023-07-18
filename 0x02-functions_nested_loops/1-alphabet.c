#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 * Description: this prints letters.
*/

/*this function prints all alphabets*/
int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	return (0);
}
