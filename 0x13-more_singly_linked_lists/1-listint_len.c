#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Returns the number of elements in a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
