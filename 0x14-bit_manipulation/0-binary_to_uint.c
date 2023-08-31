#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - COvnerts a binary to unsigned int.
 * @b: A pointer to a string containing the binary number
 *
 * Return: The converter number, or 0 if invalid input found.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result * 2;
		}
		else if (b[i] == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
