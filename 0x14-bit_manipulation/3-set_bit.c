#include "main.h"
/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: A pointer to the number in which to set the bit
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if the operation succeesed, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1Ul << index);
	return (1);
}
