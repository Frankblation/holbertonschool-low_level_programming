#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the doubly linked list.
 * @index: Index of the node to delete (starting from 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trav = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(trav);
		return (1);
	}

	while (trav != NULL)
	{
		if (count == index)
		{
			if (trav->prev != NULL)
				trav->prev->next = trav->next;
			if (trav->next != NULL)
				trav->next->prev = trav->prev;
			free(trav);
			return (1);
		}
		trav = trav->next;
		count++;
	}

	return (-1);
}