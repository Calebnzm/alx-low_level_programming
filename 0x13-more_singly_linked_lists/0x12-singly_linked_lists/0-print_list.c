#include "lists.h"

/**
* print_list - prints a linked list
* @h: pointer to the head
*
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
if (h != NULL)
{
	int i;
	const list_t *current;

	current = h;
	i = 0;
	while (current != NULL)
	{
	if (current->str == NULL)
	{
	printf("[%d] (nil)\n", current->len);
	}
	else
	{
	printf("[%d] %s\n", current->len, current->str);
	}
	current = current->next;
	i++;
	}
	return (i);
}
return (0);
}
