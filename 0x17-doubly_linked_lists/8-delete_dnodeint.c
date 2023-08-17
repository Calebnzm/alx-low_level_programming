#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node
* @head: beginning of list
* @index: the nodes index
*
* Return: (-1) on failure (1) on success
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i;

	i = 0;
	current = *head;
	previous = NULL;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		i++;
		previous = current;
		current = current->next;
	}
	if (i == index && current != NULL)
	{
		if (current->next != NULL)
		{
			current->next->prev = previous;
		}
		previous->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
