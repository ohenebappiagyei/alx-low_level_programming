#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and handles cyclic lists
 * @h:Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *h)
{
	const listint_t *tortoise = h, *hare = h;
	size_t count = 0;

	while (hare && hare->next)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			do {
				printf("[%p] %d\n", (void *)h, h->n);
				h = h->next;
				count++;
			} while (h != tortoise);

			printf("-> [%p] %d\n", (void *)h, h->n);
			return (count);
		}
	}

	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		count++;
	}

	return (count++);
}

