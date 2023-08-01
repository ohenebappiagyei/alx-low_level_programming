#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies a memory area
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: area size
 * Return: returns nothing
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
