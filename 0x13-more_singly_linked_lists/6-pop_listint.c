#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listnint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The data of the deleted head node (n), or if the list is empty.
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		/* List is empty */
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
