#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This is the function that concatenates the strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters
 * Return: result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int concat_len, len_s1, len_s2;
	char *result;

	/* Handle NULL pointers */
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	/* Calculate the length of s1 and s2 */
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	/* Determine the number of characters to concatenate */
	concat_len = len_s1 + ((n >= len_s2) ? len_s2 : n);

	/* Allocate memory for the concatenated string */
	result = (char *)malloc(concat_len + 1);

	if (result == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}

	/* copy the contents of s1 */
	strcpy(result, s1);
	/* Concatenate the first n characters of s2 */
	strncat(result, s2, n);
	return (result);
}
