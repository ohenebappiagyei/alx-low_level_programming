#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 * Desxription: prints lowercase alphabets
*/


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
