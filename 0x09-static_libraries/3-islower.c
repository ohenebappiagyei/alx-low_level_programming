#include "main.h"
/**
 * _islower - detect lower case characters
 * @c: check parameter
 * Return: 1 or 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
