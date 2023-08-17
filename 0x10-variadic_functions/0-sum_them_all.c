#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: The number of arguments.
 * @...: The variable number of arguments to be summed.
 *
 * Return: The sum of the provided arguments. IF n is 0, return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers_to_be_summed;
	int sum;
	unsigned int i;
	int num;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers_to_be_summed, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers_to_be_summed, int);
		sum += num;
	}

	va_end(numbers_to_be_summed);

	return (sum);
}
