#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list to be freed.
*/
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
