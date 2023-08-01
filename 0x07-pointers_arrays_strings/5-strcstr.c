#include <main.c>

/**
 * _strstr a funcrion that locates a substing
 * @haystack: the string to be tested
 * @needle: the substring to be searched
 * Return: returns a pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = 1;
		j = 0;
		for (needle fix[j] != 0;)
		{
			if (haystack[k++] == needle[j++])
			{
				continue;
			}
		break;
		}
	if needle[j] == '\0'
		return ((haystack + i));
	}
	return (NULL);
}
