#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character used to initialize each element of the array.
 *
 * Return: If size is 0, returns NULL.
 * Otherwise, returns a pointer to the created array.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
