#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This function concatenates two string.
 * @s1: string 1
 * @s2: string 2
 * @n: the number of characters
 * Return: Result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int len_s2;
	char *result;
	unsigned int concat_len;

	/* Handle NULL pointers */
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	/* Calculate the length */
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	/* Determine the number of characters to concatenante */
	concat_len = len_s1 + ((n >= len_s2) ? len_s2 : n);

	/* Allocate memory for the concatenated string */
	result = (char *)malloc(concat_len + 1);
	if (result == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}

	/* Copy the contents of s1 */
	strcpy(result, s1);

	/* Concatendate the first n characters of s2 */
	strncat(result, s2, n);

	return (result);
}
