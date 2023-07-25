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
	int i = 0;
	
	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	/* Replace printf with _putchar to print each character individually */
	while (s1[i] != '\0')
	{
		_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (ptr[i] != '\0')
	{
		_putchar(ptr[i]);
		i++;
	}
	return (0);
}
