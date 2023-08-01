#include "main.h"
/**
 * _strpbrk - a function that reaches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string with the pattern to be matched
 * Return: returns a pointer to the byte in s that matches or 0.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; s[i] != 0; j++)
		{
			if (s[i] == accept[j])
			{
			return ((s + 1));
			}
		}
	}
	return (0);
}
