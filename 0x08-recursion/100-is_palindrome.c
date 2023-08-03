#include "main.h"
#include <stdio.h>

int is_palindrome_helper(char *start, char *end);

/**
 * is_palindrome - Checks if a string is palindrome.
 *
 * @s: the input string to check.
 *
 * Return: 1 if the string is a pallindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	char *end = s;

	if (s == NULL || *s == '\0')
	{
		return (1);
	}

	while (*end != '\0')
	{
		end++;
	}
	end--;

	return (is_palindrome_helper(s, end));
}

/**
 * is_palindrome_helper - Recursive helper function to check palindrome.
 * @start: The starting character of the current substring.
 * @end: The ending character of the current substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
*/
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}
