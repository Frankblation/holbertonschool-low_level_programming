#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, the new node will be the head and tail. */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* If the list is not empty, find the last node and add the new node after it. */
		dlistint_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}