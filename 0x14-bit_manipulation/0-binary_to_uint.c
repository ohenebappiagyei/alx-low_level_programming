#include <stdio.h>
#include "main.h"
/**
<<<<<<< HEAD
 * binary_to_uint - COvnerts a binary to unsigned int.
 * @b: A pointer to a string containing the binary number
 *
 * Return: The converter number, or 0 if invalid input found.
=======
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary
>>>>>>> f2d6cd67f23a911399d3c3dbab56d6a5dd48e4fa
*/
void print_binary(unsigned long int n)
{
<<<<<<< HEAD
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
=======
	if (n < 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
>>>>>>> f2d6cd67f23a911399d3c3dbab56d6a5dd48e4fa
}
