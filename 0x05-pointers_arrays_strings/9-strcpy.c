#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by arc
 * @dest: copy argument to
 * @src: copy argument from
 * Return: dest
*/
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
