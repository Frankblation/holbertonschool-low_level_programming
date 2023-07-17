#include "lists.h"
/**
 * print_list - list the elements in a linked list
 * @h: h is the head of the list that starts the count.
 *
 * Return: the return of the count of elements.
 */
size_t print_listint(const listint_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len,  current->str);
		current = current->next;
		count++;
	}

	return (count);
}