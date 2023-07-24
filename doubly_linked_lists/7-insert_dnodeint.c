#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node anywhere  in the list.
 * @h: Pointer to the pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *trav = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (trav != NULL)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = trav->next;
			new_node->prev = trav;

			if (trav->next != NULL)
				trav->next->prev = new_node;
			trav->next = new_node;

			return (new_node);
		}

		trav = trav->next;
		count++;
	}

	return (NULL);
}
