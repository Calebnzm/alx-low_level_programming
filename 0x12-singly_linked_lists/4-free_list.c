#include "lists.h"

/**
* free_list - frees a linked list
* @h: pointer to the head
*
*Return: nothing
*/
void free_list(list_t *head)
{
list_t *current, *freeer;
current = head;
if (head != NULL)
{
	while (current != NULL)
	{
	freeer = current;
	current = freeer->next;
	if (freer->str != NULL)
	{
	free(freeer->str);
	}
	free(freeer);
	}
}
}

