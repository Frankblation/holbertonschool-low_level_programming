#include "lists.h"
/**
 * print_list - list the elements in a linked list
 * @h: h is the head of the list that starts the count.
 *
 * Return: the return of the count of elements.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%s\n", current->str);
		count++;
		current = current->next;
	}

	return (count);
}
