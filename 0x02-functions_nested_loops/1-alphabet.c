#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		/*call the '_putchar' function with 'alphabet' as argument.*/
		_putchar(alphabet);
	}

	_putchar('\n'); /*print a new line arfter the loop.*/

	return (0);
}
