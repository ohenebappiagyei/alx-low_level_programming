#include "main.h"
/**
 * malloc_checked - This function allocates memory
 * if allocation fails, exit with status 98.
 * @b: the size parameter it takes
 * Return: Always ptr.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed. Exiting with status 98.\n");
		exit(98);
	}
	return (ptr);
}
