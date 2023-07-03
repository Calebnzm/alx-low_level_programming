#include "lists.h"

/**
* insert_nodeint_at_index - inserts a node at a pos
* @head: pointer to the list
* @idx: index of the pos to insert
* @n: data to store in the node
*
* Return: pointer to the node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int pos;
listint_t *current, *holder, *prev;
current = *head;
pos = 0;
holder = (listint_t *)malloc(sizeof(listint_t));
if (holder == NULL)
{
	return (NULL);
}
holder->n = n;
holder->next = NULL;
if (*head == NULL)
{
	*head = holder;
}
while (current != NULL)
{
if (idx == pos)
{
	prev->next = holder;
	holder->next = current;
	return (holder);
}
else
{
	prev = current;
	current = current->next;
	pos++;
}
}
return (NULL);
}
