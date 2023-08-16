#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Apply a function to each element of an array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to be applied to each element.
 *
 * This function applies the give action to each element of the provided array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
