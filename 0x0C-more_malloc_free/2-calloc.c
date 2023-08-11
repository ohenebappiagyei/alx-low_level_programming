#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - This function allocates memory for an array, using malloc.
 * @nmemb: members of the array
 * @size: size of the space
 * Return: A pointer to the allocated memory, or NULL if allocation fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check for invalid arguments */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		/*Memory allocation failed*/
		return (NULL);
	}
	/* Set the allocated memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
