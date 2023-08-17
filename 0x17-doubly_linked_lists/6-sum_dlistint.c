#include "lists.h"

/**
* sum_dlistint - calculates the sum of a list
* @head: beginning of the list
*
* Return: (total) and (0) if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int total;

	total = 0;
	current = head;
	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		total = total + current->n;
		current = current->next;
	}
	return (total);
}
