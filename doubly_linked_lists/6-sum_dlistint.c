#include "lists.h"

/**
 * sum_dlistint - Returns the sum of the data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *trav = head;

	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}

	return (sum);
}
