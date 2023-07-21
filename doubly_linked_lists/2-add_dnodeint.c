#include "lists.h"
/**
* add_dnodeint - adds a new node as head
* @head: Pointer to the pointer to the head of the doubly linked list
* @n: Value assigned to new node
*
* Return: Pointer to the newly created node, or NULL if failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
