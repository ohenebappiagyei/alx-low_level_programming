#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_valid_number - Checks if the given string is a valid number
 * @str: The string to check.
 * Return: true if the string is a valid number, else false
*/
bool is_valid_number(const char *str)
{
	const char *ptr;
	/* check if the string contains only digits */
	for (ptr = str; *ptr != '\0'; ++ptr)
	{
		if (*ptr < '0' || *ptr > '9')
		{
			return (false);
		}
	}
	return (true);
}
/**
 * print_number - Prints an integer.
 * @num: The integer to print.
*/
void print_number(int num)
{
	/* Handle negative numbers */
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	/* Recursively print digits */
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 (successful) or 98 (on error).
*/
int main(int argc, char *argv[])
{
	const char *num1_str, *num2_str;
	int num1, num2, result;

	/* Check if the number of arguments is incorrect */
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	/* Get the numbers as strings from command-line arguments */
	num1_str = argv[1];
	num2_str = argv[2];

	/*Check if the numbers are valid (composed of digits)*/
	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
		 _putchar('E');
		 _putchar('r');
		 _putchar('r');
		 _putchar('o');
		 _putchar('r');
		 _putchar('\n');
		 return (98);
	 }
	 /* Convert the strings to integers */
	 num1 = atoi(num1_str);
	 num2 = atoi(num2_str);

	 /* Multiply the numbers */
	 result = num1 * num2;

	 /* Print the result */
	 print_number(result);
	 _putchar('\n');

	 return (0);
}

