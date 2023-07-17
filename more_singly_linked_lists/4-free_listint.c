#include "lists.h"
/**
 * free_list - function with one argument
 * @head: pointer to list_t
 *
 * Description: frees a list
 * Return: void
 */
void free_listint(listint_t *head)
{
	list_t *move;

	while (head != NULL)
	{
		move = head->next;
		free(head->str);
		free(head);
		head = move;
	}
}
