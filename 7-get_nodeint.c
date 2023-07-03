#include "lists.h"

/**
* get_nodeint_at_index - finds a specific node in alist
* @index: the node being searched
*
* Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int pos;
pos = 0;
current = head;
while (current != NULL)
{
if (index == pos)
{
	return (current);
}
else
{
	current = current->next;
	pos++;
}
}
return (NULL);
}
