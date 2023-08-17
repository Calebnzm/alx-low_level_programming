#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a node at a specific point
* @h: begining of list
* @idx: idex to insert
* @n: value to store
*
* Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current;
	unsigned int i;

	i = 0;
	current = *h;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*h == NULL)
	{
		*h = newnode;
		return (newnode);
	}
	while (current != NULL && i < idx)
	{
		i++;
		current = current->next;
	}
	if (i == idx)
	{
		current->next->prev = newnode;
		newnode->next = current->next;
		newnode->prev = current;
		current->next = newnode;
		return (newnode);
	}

	free(newnode);
	return (NULL);
}
