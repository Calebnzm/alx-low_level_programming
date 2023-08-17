#include "lists.h"

/**
* dlistint_len - counts all elements of a linked list
* @h: pointer to the head
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *current;

	current = h;
	i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
