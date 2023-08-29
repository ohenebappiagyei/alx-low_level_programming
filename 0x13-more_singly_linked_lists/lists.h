#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s - A linked list node structure
 * @n: Integer value stored in the node
 * @next: Pointer to the next node in the list
 *
 * Description: A structure to represent a node in a linked list
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* MAIN_H */
