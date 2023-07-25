#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
	char s1[98];
	char *ptr;
	
	int i;
	
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}

	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	ptr = _strcpy(s1, "first, solve the problem. Then, write the code\n");
	_putchar('\n');

	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	_putchar('\n');

	return (0);
}
