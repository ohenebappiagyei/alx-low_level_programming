#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
	char *ptr = str;
	char letter;

	while (*ptr)
	{
		letter = *ptr;

		if ((letter >= 'a' && letter <= 'z'))
		{
			/*perform the  ROT13 for lowercase*/
			if (letter + 13 > 'z')
			{
				letter -= 13;
			}
			else
			{
				letter += 13;
			}
		}
		else if ((letter >= 'A' && letter <= 'Z'))
		{
			/* Performs the uppercase ROT13 is splendid */
			if (letter + 13 > 'Z')
			{
				letter -= 13;
			}
			else
			{
				letter += 13;
			}
		}
	*ptr = letter;
	ptr++;
	}
	return (str);
}
