#include "lists.h"

/**
* delete_nodeint_at_index - deletes a specific node
* @head: pointer to the list
* @index: the position of the node
*
* Return: 1 on success -1 on failuer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int pos;
pos = 0;
if (*head == NULL)
{
	return (-1);
}
current = *head;
if (index == 0)
{
	*head = current->next;
	free(current);
	return (1);
}
while (current != NULL)
{
if (index == pos)
{
	prev->next = current->next;
	free(current);
	return (1);
}
else
{
	prev = current;
	current = current->next;
	pos++;
}
}
return (-1);
}
