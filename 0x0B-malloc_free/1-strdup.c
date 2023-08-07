#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a given a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if
 * str is NULL or memory allocation fails.
*/
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Calclate the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy the input string to the duplicated string */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
