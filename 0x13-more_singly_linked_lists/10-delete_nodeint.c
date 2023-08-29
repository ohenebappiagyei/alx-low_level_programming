#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	if (!head || !*head)
	{
		/* List is empty or head is NULL */
		return (-1);
	}
	current = *head;
	prev = NULL;

	if (!index)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		while (index > 0 && current)
	{
		prev = current;
		current = current->next;
		index--;
	}

	if (!current)
	{
		return (-1);
	}

		prev->next = current->next;
		free(current);
	}

	return (1);
}
