#include "lists.h"

/**
* list_len - returns number of nodes
* @h: pointer to the head
*
*Return: number of nodes
*/
size_t list_len(const list_t *h)
{
if (h != NULL)
{
	int i;
	const list_t *current;

	current = h;
	i = 0;
	while (current != NULL)
	{
	current = current->next;
	i++;
	}
	return (i);
}
return (0);
}
