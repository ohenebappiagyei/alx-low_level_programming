#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 * Return: A pointer to the newly allocated memory, or NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* Check if new_size id zero, if so free the memory and return NULL. */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/* If new_size is equal to old_size, do nothing and return ptr. */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* ALLOCATE MEMORY FOR THE NEW BLOCK */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/* Copy contents from the old block to the new block */
	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
	/* Free the old memory */
	free(ptr);

	return (new_ptr);
}
