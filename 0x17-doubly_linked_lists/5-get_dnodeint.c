#include "lists.h"

/**
* get_dnodeint_at_index - returns a specific node
* @head: begining of list
* @index: the node number
*
* Return: the node pointer
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	i = 0;
	current = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
