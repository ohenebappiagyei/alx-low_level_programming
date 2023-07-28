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
	int shift;

	while (*ptr)
	{
		letter = *ptr;
		if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		/* Determine the shift amount based on the case of the letter */
			shift = (letter >= 'a' && letter <= 'z') ? 13 : 13;
		/* Perform the ROT13 shift */
		if ((letter >= 'a' && letter <= 'z'
		&& letter + shift > 'z') || (letter >= 'A'
		&& letter <= 'Z' && letter + shift > 'Z'))
		{
			letter -= 26;
		}
		letter += shift;
		*ptr = letter;
	ptr++;
	}

	return (str);
}
