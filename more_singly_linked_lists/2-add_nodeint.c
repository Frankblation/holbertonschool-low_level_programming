#include "lists.h"
/**
 * add_nodeint - function with two arguments
 * @head: double pointer to linked list
 * @n: Integer to be found
 *
 * Description: put a new node at the beginning
 * Return: new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int count = 0;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->str = _strdup(str);
	while (str[count] != '\0')
		count++;
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns memory from pointer
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}