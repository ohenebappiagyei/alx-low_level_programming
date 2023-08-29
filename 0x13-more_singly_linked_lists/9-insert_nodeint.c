#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts node at a given position in a listint_t.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index where the new node should be added.
 * @n: The value to be stored in the new node
 * Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (!head || (idx > 0 && !*head))
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		/* Allocation failed */
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head, *head = new_node;
	}
	else
	{
		listint_t *prev = *head;
	while (--idx && (prev->next))
		;
	if (!idx)
		new_node->next = prev->next, prev->next = new_node;
	else
		free(new_node), new_node = NULL;
	}
	return (new_node);
}
