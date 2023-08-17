#include "lists.h"

/**
* print_dlistint - prints all elements of a linked list
* @h: pointer to the head
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *current;

	current = h;
	i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
