#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The lenght of the string (ecluding the null terminator.
*/
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * puts_half - Prints the seconds half of a string, followed by a new line.
 * @str: Pointer to the string.
*/
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index;
	int i;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

