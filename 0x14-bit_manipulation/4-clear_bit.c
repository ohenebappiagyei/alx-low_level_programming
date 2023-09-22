#include "main.h"
/**
 * clear_bit - Clear the value of a bit to 0 at a given index
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (starting from 0)
 * Return: 1 if the operation succeeded, or 0 if not.
 *
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n &= ~(1UL << index);
	return (1);
}
