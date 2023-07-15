#include <stdio.h>
/**
 * main - Entry point for function
 * Return: 0 (successful)
 * Description: prints base 16.
*/

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
