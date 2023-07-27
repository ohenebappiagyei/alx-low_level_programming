#include "main.h"

/**
 * is_separator - check if the character is a separator
 * @ch: character to check
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char ch)
{
	char separators[] = " \t\n,;.?!\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (ch == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @str: input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *result = str;

	while (*str != '\0')
	{
		if (capitalize_next && (*str >= 'a' && *str <= 'z'))
			{
				*str = *str - 'a' + 'A';
				capitalize_next = 0;
			}
		else if (is_separator(*str))
			{
				capitalize_next = 1;
			}
		str++;
	}
	return (result);
}
