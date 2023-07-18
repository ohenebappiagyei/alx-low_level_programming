#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 0 (successful)
*/

int _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
