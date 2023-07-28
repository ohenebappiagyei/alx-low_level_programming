#include "main.h"
/**
 * rot13 - Entry point
 * @s: no of element
 * Return: Return 0
*/
char *rot13(char *s)
{
	int i, j;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char swap[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = swap[j];
				break;
			}
		}
	}
	return (s);
}
