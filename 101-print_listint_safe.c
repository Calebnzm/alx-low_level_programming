#include "lists.h"

/**
* print_listint_safe - correctly prints alist
* @head: pointer to the head of the list
*
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
unsigned int number, addrs_size, i;
const listint_t **addrs;
const listint_t *current;
current = head;
addrs = NULL;
number = addrs_size = 0;
while (current != NULL)
{
for (i = 0; i < addrs_size; i++)
{
if (addrs[i] == current)
{
	printf("-> [%p] %d\n", (void *)current, current->n);
	free(addrs);
	return (number);
}
}
printf("[%p] %d\n", (void *)current, current->n);
number++;
addrs_size++;
addrs = (const listint_t **)realloc(addrs, addrs_size *sizeof(listint_t *));
addrs[addrs_size - 1] = current;
current = current->next;
}
free(addrs);
return (number);
}
