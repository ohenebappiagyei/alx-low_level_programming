#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: A pointer to head of the linked list.
 * Return: the number of nodes in the linked list.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
