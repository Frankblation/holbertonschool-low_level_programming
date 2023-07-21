#include "lists.h"

/**
* print_dlistint - Prints all elements in dlistint
* @h: h is pointing to the head node.
*
* Return: The number of nodes traversed throuh by trav.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t  *trav = h;
	size_t node_count = 0;

	while(trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		node_count++;
	}

	return (node_count);
}