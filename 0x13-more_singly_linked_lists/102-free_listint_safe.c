#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h;
	size_t count = 0;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
			while (*h != slow)
			{
				listint_t *temp = *h;
				*h = (*h)->next;
				free(temp);
				count--;
			}

			*h = NULL;
			free(slow);
			count++;

			return (count);
		}
	}

	while (*h)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	return (count);
}
