#include <stdlib.h>
/**
 * malloc_checked - This function allocates memory
 * @b: the size parameter it takes
 * Return: Allocate pointer in memory.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}
