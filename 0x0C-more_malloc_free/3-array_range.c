#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates and array of integers.
 * @min: The minimum value for the array.
 * @max: The maximum value for the array
 * Return: A pointer to the newly created array, otherwise NULL or invalid.
*/
int *array_range(int min, int max)
{
	int size, i, *arr;

	/* Check if min is greater than max */
	if (min > max)
	{
		return (NULL);
	}
	/* Calculate the size of the array */
	size = (max - min) + 1;

	/* Allocate memory for the array */
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}
	/* Populate the array with values from min to max */
	for (i = 0; i < size; ++i)
	{
		arr[i] = min + i;
	}
	return (arr);
}
